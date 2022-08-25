using System.Collections.Generic;
using UnityEngine;
using NRKernal;
using System;
using UnityEngine.UI;

public class ObjectDetection : MonoBehaviour
{
    #region Texture Source 처리
    [SerializeField] CameraTexture source;
    [SerializeField] RawImage preview;
    public Texture2D textureSource;
    public Texture2D textureCropped;

    private int cropSize = 720;
    private int width;
    private int height;
    private int startX;
    private int startY;
    #endregion

    #region Computer Vision 호출
    [SerializeField] CustomVisionAPI customvision;
    private List<Prediction> predictions;
    private int max_pos;
    public bool trigger = true;
    private float time = 0;
    #endregion

    #region 데이터 계산
    public BoundingBox box;
    public double distance;
    public double scale = 3200; //5.87515;
    public int ballCenter_i;
    public int ballCenter_j;
    #endregion

    #region 데이터 활용
    private Transform m_CenterCamera;
    private Transform CenterCamera
    {
        get
        {
            if (m_CenterCamera == null)
            {
                if (NRSessionManager.Instance.CenterCameraAnchor != null)
                {
                    m_CenterCamera = NRSessionManager.Instance.CenterCameraAnchor;
                }
                else if (Camera.main != null)
                {
                    m_CenterCamera = Camera.main.transform;
                }
            }
            return m_CenterCamera;
        }
    }
    [SerializeField] Trajectory storage;

    private float runtime = 0;
    public bool runtimeRun;

    //GolfBall Model
    public GameObject golf_ball;
    public GameObject golf_ball_start;
    #endregion

    #region 궤적

    #endregion

    void Start()
    {
        textureSource = source.textureFull;
        width = source.width;
        height = source.height;
        // 시작 Crop Size
        textureCropped = new Texture2D(cropSize, cropSize, TextureFormat.RGB24, false);
    }
    private void OnEnable()
    {
        if (textureCropped == null)
        {
            textureCropped = new Texture2D(cropSize, cropSize, TextureFormat.RGB24, false);
            textureSource = source.textureFull;
            width = source.width;
            height = source.height;
        }
    }

    private void OnDestroy()
    {
        if(textureCropped != null)
        {
            Destroy(textureCropped);
            textureCropped= null;
        }
    }


    void Update()
    {
        time += Time.deltaTime;
        if (runtimeRun)
        {
            runtime += Time.deltaTime;
        }
        if (runtime > 7f)
        {
            runtimeRun = false;
            runtime = 0;
            time = 0;
            cropSize = 720;
        }

        if (time > 1.5f && runtime > 0)
        {
            TriggerTrue();
        }

        #region Crop 실행
        if (trigger)
        {
            // 변경된 Crop사이즈에 따라 초기화 진행
            //textureCropped = null;
            textureCropped = new Texture2D (cropSize, cropSize, TextureFormat.RGB24, false);

            textureSource = source.textureFull;
            //DeCompress(textureSource);
            Debug.Log("Source: " + textureSource.height + ", Cropped: " + textureCropped.height + ", target height:" + height + ", cropsize: " + cropSize);
            TextureUtils.CropV2(textureSource, textureCropped, (width / 2) - (cropSize / 2), (height / 2) - (cropSize / 2), cropSize);
            #endregion
            preview.texture = textureCropped;
            (preview.texture as Texture2D).Apply();


            //cropSize-= 10;
        }
        #region Prediction API 사용
        if (trigger)
        {
            time = 0;
        }

        if (trigger) //@@@@@ Prediction 여부
        {

            customvision.Predict(TextureUtils.DeCompress(textureCropped));
            // 응답 확인
            if (CheckPredictionResult(customvision.result))
            {
                bool detect = false;

                //  CropSize + BoundingBox -> (Ball Area , Golfball Position) -> Distance
                if (predictions[max_pos].probability >= 0.3)
                {
                    detect = true;

                    box = predictions[max_pos].boundingBox;

                    double ballArea = (cropSize * box.width) * (cropSize * box.height); // World Area  //scale 3200하면 됨
                    //double ballRadius = (cropSize * box.width) / 2;

                    distance = Area2Distance(ballArea);
                    //distance = Radius2Distance(ballRadius);
                    //distance = Diameter2Distance(box.width);


                    ballCenter_i = startX + (int)(cropSize * (box.left + width / 2));
                    ballCenter_j = startY + (int)(cropSize * (1 - (box.top + box.height)));

                    // 확대
                    if (box.width < 0.1)
                    {
                        cropSize = cropSize - 10;
                    }
                }

                #region 활용
                if (detect)
                {
                    golf_ball.transform.position = CenterCamera.position;
                    golf_ball.transform.rotation = CenterCamera.rotation;
                    //golf_ball.transform.rotation = CalcRotation(CenterCamera.rotation, ballCenter_i, ballCenter_j);
                    golf_ball.transform.Translate(Vector3.forward.normalized * (float)distance);

                    if (storage.count == 0)
                    {
                        Debug.Log("Storage Count 0, so golfball_start moved");
                        golf_ball_start.transform.position = golf_ball.transform.position;
                    }

                    //  HeadPose + Golfball Position => DB
                    storage.AddData(new DetectionData(golf_ball.transform, distance, Time.realtimeSinceStartup));
                }
                #endregion
            }
            trigger = false;
        }
        #endregion


        // 일정 이상의 데이터 획득 시 Trajectory 출력
        if (storage.count > 2) 
        {
            //noticeText.text = "SIze: " + storage.Counts();
            storage.CheckData();

            storage.PrintTrajectory();
        }
    }

    public void PredictionTrigger()
    {
        runtimeRun = true;
    }

    public void TriggerTrue()
    {
        trigger = true;
    }

    private double Area2Distance(double area)
    {
        return scale / area;
    }
    private double Radius2Distance(double radius)
    {
        return 2.323296 - 0.044134 * radius;
    }
    private double Diameter2Distance(double diameter)
    {
        return (391.922 + (-scale * diameter)) / 100;
        //return (391.922 + (-5.87515 * diameter))/100;   // y=mx+b  m:-5.87515, b=391.922s -> cm에서 m변환
    }

    private Quaternion CalcRotation(Quaternion headRotation, int ballCenter_i, int ballCenter_j)
    {
        Vector3 headRig = headRotation.eulerAngles;

        #region X축 회전 EulerAngle
        double angleX;
        if (ballCenter_j < height / 2)
        {
            angleX = -(35.45/1.778) * (height / 2 - ballCenter_j) / (height / 2);
        }
        else
        {
            angleX = +(35.45 / 1.778) * (ballCenter_j - height / 2) / (height / 2);
        }
        #endregion

        #region Y축 회전 EulerAngle
        double angleY;
        if (ballCenter_i < width/2)
        {
            angleY = - 35.45 * (width / 2 - ballCenter_i) / (width/2);
        }
        else
        {
            angleY = 35.45 * ( ballCenter_i - width/2 ) / (width/2);
        }
        #endregion

        return Quaternion.Euler(headRig + new Vector3((float)angleX, (float)angleY, 0));
    }

    //afterview.texture = new Texture2D(cropSize, cropSize, TextureFormat.RGB24, false);
    //afterview.texture = textureCropped;
    //(afterview.texture as Texture2D).SetPixel(i, j, Color.red);
    //(afterview.texture as Texture2D).Apply();


    // Detection 2 Vector3D
    //ulong timestamp = source.timestamp;
    //Pose headpose = NRFrame.HeadPose;
    //Vector3 point = Detection2Point(headpose, uni_center_x, uni_center_y, ball_area);
    //traj.AddData(new DetectionData(CenterCamera.rotation.eulerAngles, distance, timestamp));
    //traj.CheckData();

    private bool CheckPredictionResult(ResultJson result)
    {
        if (customvision.result != null)
        {
            predictions = customvision.result.predictions; // Empty여부와 상관없이 Insert

            if (predictions.Count > 0)
            {
                //Max Probability 획득
                max_pos = 0;
                for (int i = 0; i < predictions.Count; i++)
                {
                    if (predictions[max_pos].probability < predictions[i].probability)
                    {
                        max_pos = i;
                    }
                }
                Debug.Log("Max Probability:" + predictions[max_pos].probability); return true;
            }
            else { Debug.Log("Prediction Result Empty"); return false; }
        }
        else { Debug.Log("CustomVision Result Null"); return false; }
    }

    private void MoveBall()
    {
        golf_ball.transform.rotation = CenterCamera.rotation;
        golf_ball.transform.position = CenterCamera.position;

        //Debug.Log("GolfBall rotation: " + golf_ball.transform.rotation.x + "  " + golf_ball.transform.rotation.y + "  " + golf_ball.transform.rotation.z);
        golf_ball.transform.Translate(Vector3.forward *(float)distance);

    }

    public long UnixTimeNow() { var timeSpan = (DateTime.UtcNow - new DateTime(1970, 1, 1, 0, 0, 0)); return (long)timeSpan.TotalSeconds; }
    public void ChangeScale(bool boo)
    {
        if (boo)
        {
            scale += 10;
        }
        else
        {
            scale -= 10;
        }
    }
}