using Newtonsoft.Json;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CustomVisionAPI : MonoBehaviour
{
    public ResultJson result;
    private WWW www;

    // Values
    private static string key = "660e24abf0504578a7abc88a5ad82c49";
    private string url = "https://metaversedevelopergolfball-prediction.cognitiveservices.azure.com" +
        "/customvision/v3.0/Prediction/eadf6bf6-1937-42e6-a028-06d317943443/detect/iterations/Iteration1/image?";
    Dictionary<string, string> headers = new Dictionary<string, string>();

    private void Start()
    {
        headers.Add("Prediction-Key", key);
        headers.Add("ContentType", "application/octet-stream");
    }

    // Update is called once per frame
    void Update()
    {

    }

    public bool Predict(Texture2D texture)
    {
        try
        {
            int delay = 5000;
            int timer = 0;
            bool done = false;

            byte[] byteData = texture.EncodeToPNG();
            www = new WWW(url, byteData, headers);

            while (delay > timer)
            {
                System.Threading.Thread.Sleep(1);
                timer++;
                if (www.isDone)
                {
                    done = true;

                    byte[] bytedata = www.bytes;
                    var str = System.Text.Encoding.Default.GetString(bytedata);
                    Debug.Log("[CustomVisionAPI] byteData_str: " + str);

                    result = JsonConvert.DeserializeObject<ResultJson>(str);
                    break;
                }
            }
            if (done == false)
            {
                return false;
            }
            return true;

        }
        catch (System.Exception e)
        {
            Debug.LogError(e);
            return false;
        }
    }
}
