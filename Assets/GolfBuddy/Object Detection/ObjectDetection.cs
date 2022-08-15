using Newtonsoft.Json;
using Proyecto26;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;


public class ObjectDetection : MonoBehaviour
{
    private KalmanFilter kf;

    public int CropWidth;
    public int CropHeight;
    private static int cropSize = 400;

    [SerializeField] CameraTexture source;
    public Texture2D texture_full;
    public Texture2D texture_cropped;

    public string result;
    public ResultJson json;
    public List<Prediction> predictions;
    public BoundingBox box;

    private int x1=0 ; private int y1=0 ;

    public bool send = true;

    // Start is called before the first frame update
    void Start()
    {
        texture_full = source.textureFull;
    }

    // Update is called once per frame
    void Update()
    {
        // TextureFull 업데이트
        texture_full = source.textureFull;
        
        if (texture_full != null)
        {
            //  Detecting 영역 Crop
            texture_cropped = Crop(x1,y1); //x1 y1 은 시작값

            //  Prediction API 사용
            if (send)
            {
                MakePredictionRequest(texture_cropped).ConfigureAwait(false);
                send = false;
            }

            //  Result 적용
            int x2 =0; int y2=0;
            //kf.buffer(x1+x2, y1+y2);
            // 새로운 Detecting 영역 설정 by Kalman Filter
            //x1 = kf.x;  y1 = kf.y;
         }
    }

    private Texture2D Crop(int x, int y)
    {
        if(x+cropSize <texture_full.width && y+cropSize < texture_full.height)
        {
            Texture2D tex = new Texture2D(cropSize, cropSize, TextureFormat.RGB24, false);

            //

        }
        Texture2D texture = texture_full;
        return texture;
    }

    public async Task MakePredictionRequest(Texture2D tex)
    {
        var client = new HttpClient();
        client.DefaultRequestHeaders.Add("Prediction-Key", "660e24abf0504578a7abc88a5ad82c49");
        string url = "https://metaversedevelopergolfball-prediction.cognitiveservices.azure.com/customvision/v3.0/Prediction/eadf6bf6-1937-42e6-a028-06d317943443/detect/iterations/Iteration1/image?";

        HttpResponseMessage response;
        Debug.Log("MakePrediction Request 3");

        byte[] byteData = tex.EncodeToJPG();    //여기서 문제발생

        Debug.Log("MakePrediction Request 4");
        var content = new ByteArrayContent(byteData);
        content.Headers.ContentType = new MediaTypeHeaderValue("application/octet-stream");

        response = await client.PostAsync(url, content).ConfigureAwait(false);
        result = await response.Content.ReadAsStringAsync().ConfigureAwait(false);

        json = JsonConvert.DeserializeObject<ResultJson>(result);
        predictions = json.predictions;
        box = predictions[0].boundingBox;
    }
}
