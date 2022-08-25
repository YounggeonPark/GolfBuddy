using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CustomVisionAPI : MonoBehaviour
{
    public ResultJson result;
    private WWW www;
    Dictionary<string, string> headers = new Dictionary<string, string>();

    // Values
    private readonly static string key = "660e24abf0504578a7abc88a5ad82c49";
    private readonly static string url = "https://metaversedevelopergolfball-prediction.cognitiveservices.azure.com/customvision/v3.0/Prediction/bd435c16-492a-4c5a-b718-bbc3391e5341/detect/iterations/";
    private readonly static string model = "Iteration4/image";

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
            
            www = new WWW(url+model, texture.EncodeToPNG(), headers);

            while (delay > timer)
            {
                System.Threading.Thread.Sleep(1);
                timer++;
                if (www.isDone)
                {
                    Debug.Log("[CustomVisionAPI] byteData_get");
                    done = true;

                    result = JsonConvert.DeserializeObject<ResultJson>(System.Text.Encoding.Default.GetString(www.bytes));
                    break;
                }
            }
            if (done == false)
            {
                Debug.Log("Load Fail");
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
