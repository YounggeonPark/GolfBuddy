using System.Collections.Generic;
using UnityEngine;
using NRKernal;
using System;
using UnityEngine.UI;

public class ObjectDetection : MonoBehaviour
{
    #region Texture Source 처리
    [SerializeField] CameraTexture source;
    [SerializeField] RawImage afterview;
    [SerializeField] RawImage preview;
    public Texture2D textureSource;
    public Texture2D textureCropped;

    private int cropSize = 400;
    private int width;
    private int height;
    private int startX;
    private int startY;
    #endregion

    #region Computer Vision 호출
    [SerializeField] CustomVisionAPI customvision;
    private List<Prediction> predictions;
    private int max_pos;
    public bool trigger = false;
    float time;
    #endregion

    #region 데이터 계산
    public double distance;
    public double scale = 0.1;
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

    [SerializeField] NRHMDPoseTracker tracker;

    //GolfBall Model
    public GameObject golf_ball;
    private Text noticeText;    //상단 상태창
    #endregion

    void Start()
    {
        noticeText = GameObject.FindGameObjectWithTag("NoticeText").GetComponent<Text>();

        textureSource = source.textureFull;
        width = textureSource.width;
        height = textureSource.height;
        // 시작 Crop Size
        textureCropped = new Texture2D(cropSize, cropSize, TextureFormat.RGB24, false);
    }

    void Update()
    {
        #region Crop 실행
        textureSource = source.textureFull;
        //DeCompress(textureSource);
        textureCropped = CropV2(0, 0);
        #endregion
        preview.texture = textureCropped;
        (preview.texture as Texture2D).Apply();

        #region Prediction API 사용
        if (trigger)
        {
            time = 0;
        }

        if (trigger) //@@@@@ Prediction 여부
        {
            customvision.Predict(DeCompress(textureCropped));

            // 응답 확인
            if (CheckPredictionResult(customvision.result))
            {
                //  CropSize + BoundingBox -> (Ball Area , Golfball Position) -> Distance
                BoundingBox box = predictions[max_pos].boundingBox;
                double ballArea = (cropSize * box.width) * (cropSize * box.height); // World Area
                distance = Area2Distance(ballArea);

                ballCenter_i = startX + (int)(cropSize * (box.left + width / 2));
                ballCenter_j = startY + (int)(cropSize * (1 - (box.top + box.height)));

                //  HeadPose + Golfball Position => DB

            }

            trigger = false;
        }

        afterview.texture = preview.texture;
        #endregion
        /*
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                (afterview.texture as Texture2D).SetPixel(i, j, Color.blue);
            }
        }
        (afterview.texture as Texture2D).Apply();
        */
        

        // if(DB.Count > enoughNumber) Print Trajectory

        #region 활용
        golf_ball.transform.position = CenterCamera.position;
        golf_ball.transform.rotation = CalcRotation(CenterCamera.rotation, ballCenter_i, ballCenter_j);
        golf_ball.transform.Translate(Vector3.forward * (float)distance);
        #endregion

        #region 메모리 관리
        //Texture2D.DestroyImmediate(textureCropped);
        //Texture2D.DestroyImmediate(textureSource);
        #endregion
    }

    public void PredictionTrigger()
    {
        trigger = true;
    }

    private double Area2Distance(double area)
    {
        return scale * area;
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


    //golf_ball.transform.rotation = CenterCamera.rotation;
    //golf_ball.transform.position = CenterCamera.position;

    //Debug.Log("GolfBall rotation: " + golf_ball.transform.rotation.x + "  " + golf_ball.transform.rotation.y + "  " + golf_ball.transform.rotation.z);
    //golf_ball.transform.Translate(Vector3.forward *(float)distance);

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

    public static Texture2D DeCompress(Texture2D source)
    {
        RenderTexture renderTex = RenderTexture.GetTemporary(
                    source.width,
                    source.height,
                    0,
                    RenderTextureFormat.Default,
                    RenderTextureReadWrite.Linear);

        Graphics.Blit(source, renderTex);
        RenderTexture previous = RenderTexture.active;
        RenderTexture.active = renderTex;
        Texture2D readableText = new Texture2D(source.width, source.height);
        readableText.ReadPixels(new Rect(0, 0, renderTex.width, renderTex.height), 0, 0);
        readableText.Apply();
        RenderTexture.active = previous;
        RenderTexture.ReleaseTemporary(renderTex);
        return readableText;
    }

    public long UnixTimeNow() { var timeSpan = (DateTime.UtcNow - new DateTime(1970, 1, 1, 0, 0, 0)); return (long)timeSpan.TotalSeconds; }
    public void ChangeScale(bool boo)
    {
        if (boo)
        {
            scale += 1;
        }
        else
        {
            scale -= 1;
        }
        noticeText.text = "Scale" + scale;
    }
    private Texture2D CropV2(int x, int y)
    {
        Texture2D tex = new Texture2D(cropSize, cropSize, TextureFormat.RGB24, false);

        tex.SetPixels(textureSource.GetPixels(x, y, cropSize, cropSize));
        tex.Apply();

        return tex;
    }
}