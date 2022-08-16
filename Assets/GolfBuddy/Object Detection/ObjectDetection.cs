using System.Collections.Generic;
using UnityEngine;
using NRKernal;
using System;

public class ObjectDetection : MonoBehaviour
{
    //Texture처리;
    private static int cropSize = 400;
    public Texture2D texture_full;
    public Texture2D texture_cropped;

    public int detecting_center_x = 0; public int detecting_center_y = 0;
    public int start_x; public int start_y;

    //Method 선택
    [SerializeField] CustomVisionAPI customvision;
    [SerializeField] CameraTexture source;

    //CV 관련
    private List<Prediction> predictions;
    private BoundingBox box;
    public double distance;

    public bool send = true;

    //Computing
    private KalmanFilter kf;
    private Trajectory traj;
    [SerializeField] NRHMDPoseTracker tracker;


    // Start is called before the first frame update
    void Start()
    {
        texture_full = source.textureFull;
        // Initialize to MID
        detecting_center_x = source.width / 2;
        detecting_center_y = source.height / 2;

    }

    // Update is called once per frame
    void Update()
    {
        // TextureFull 업데이트
        texture_full = source.textureFull;

        if (texture_full != null)
        {
            #region Crop Texture
            Debug.Log("Crop Texture");
            texture_cropped = Crop(detecting_center_x, detecting_center_y);
            #endregion

            #region Prediction API 사용
            if (send)
            {
                Debug.Log("Prediction API");
                customvision.Predict(DeCompress(texture_cropped));

                if (customvision.result != null)
                {
                    predictions = customvision.result.predictions;

                    int max_pos = 0;
                    for (int i = 0; i < predictions.Count; i++)
                    {
                        if (predictions[max_pos].probability < predictions[i].probability)
                        {
                            max_pos = i;
                        }
                    }
                    //  Max Probablity Area
                    box = predictions[max_pos].boundingBox;
                }
                else
                {
                    Debug.Log("Object Detection result null");
                }

                send = false;
            }
            #endregion

            #region Bounding Box 처리
            if (box != null)
            {
                Debug.Log("BoundingBox");
                //  해상도에 맞게 casting하여 pixel local위치 획득
                int local_center_x = (int)((box.left + box.width / 2) * cropSize);
                int local_center_y = (int)((box.top + box.height / 2) * cropSize);
                //  Local Pixel -> Universal Pixel
                int uni_center_x = start_x + local_center_x; //오른쪽으로
                int uni_center_y = start_y + local_center_y; //아래로
                //  Kalman Filter에 업데이트
                //kf.buffer(uni_center_x, uni_center_y  );

                //  Ball area 획득
                double ball_area = box.width * box.height;

                // Detection 2 Vector3D
                ulong timestamp = source.timestamp;
                Pose headpose = NRFrame.HeadPose;
                Vector3 point = Detection2Point(headpose, uni_center_x, uni_center_y, ball_area);

                //  Trajectory에 Data ADD
                if (point != null)
                {
                    if (point == null)
                    {
                        Debug.Log("Point Null");
                    }
                    else
                    {
                        //traj.AddData(new DetectionData(point, timestamp));
                    }
                }
            }
            else
            {
                //kf.skip();
            }
            #endregion

            // 새로운 Detecting 영역 설정 by Kalman Filter
            //detecting_center_x = kf.x;
            //detecting_center_y = kf.y;
        }
    }

    private Texture2D Crop(int x, int y)
    {
        Texture2D tex = new Texture2D(cropSize, cropSize, TextureFormat.RGB24, false);
        if (x - cropSize / 2 > 0 && x + cropSize / 2 < source.width && y - cropSize / 2 > 0 && y + cropSize / 2 < source.height)
        {
            start_x = x- cropSize / 2;
            start_y = y - cropSize / 2;

            for (int i = 0; i < cropSize; i++)
            {
                for (int j = 0; j < cropSize; j++)
                {
                    tex.SetPixel(i, j, texture_full.GetPixel(start_x + i, start_y + j));
                }
            }
            return tex;
        }
        else
        {
            start_x = x - cropSize / 2;
            start_y = y - cropSize / 2;
            // Collision Filter
            if (x - cropSize / 2 <= 0)
            {
                start_x = 0;
            }
            else if(x + cropSize/2 > source.width)
            {
                start_x = source.width - cropSize;
            }
            if (y - cropSize / 2 <= 0)
            {
                start_y = 0;
            }
            else if (y + cropSize / 2 > source.height)
            {
                start_y = source.height - cropSize;
            }
            // Copy Texture
            for (int i = 0; i < cropSize; i++)
            {
                for (int j = 0; j < cropSize; j++)
                {
                    tex.SetPixel(i, j, texture_full.GetPixel(start_x + i, start_y + j));
                }
            }
            return tex;
        }

        /*
        //이전
        if (x + cropSize < texture_full.width && y + cropSize < texture_full.height)
        {

            gap_x = 200;
            gap_y = 200;

        }
        Texture2D texture = texture_full;
        return texture;
        */
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

    public double CalculateDistance(double area)
    {
        double scale = 100;
        return area / scale;
    }

    public Vector3 Detection2Point(Pose head, int detecting_center_x, int detecting_center_y, double ball_area)
    {
        distance = CalculateDistance(ball_area);

        double angle_x;
        #region X축 각도
        int center2obj_x;
        if (detecting_center_x > source.width / 2)
        {
            center2obj_x = (detecting_center_x - source.width / 2);
        }
        else
        {
            center2obj_x = (-(source.width / 2 - detecting_center_x));
        }
        angle_x = (35.45 / (source.width / 2)) * center2obj_x;
        #endregion
        double angle_y;
        #region Y축 각도
        int center2obj_y;
        if (detecting_center_y < source.height / 2)
        {
            center2obj_y = (detecting_center_y - source.height / 2);
        }
        else
        {
            center2obj_y = (-(source.height / 2 - detecting_center_y));
        }
        angle_y = ((35.45 / 1.778) / (source.height / 2)) * center2obj_y;
        #endregion

        Vector3 unit_vec = (Quaternion.Euler((float)angle_y, (float)angle_x, 0) * head.rotation.eulerAngles).normalized;

        return unit_vec * (float)distance;
    }

    public long UnixTimeNow() { var timeSpan = (DateTime.UtcNow - new DateTime(1970, 1, 1, 0, 0, 0)); return (long)timeSpan.TotalSeconds; }
}
