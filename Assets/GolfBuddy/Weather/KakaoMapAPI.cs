using Newtonsoft.Json;
using Proyecto26;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEditor;
using UnityEngine;
using UnityEngine.Networking;

public class KakaoMapAPI
{
    private string key = "4c593f3644c346820b3abb8822d7d03d"; //REST API key
    public string url = "https://dapi.kakao.com/v2/local/geo/coord2regioncode.json?input_coord=WGS84&output_coord=WGS84";

    private double longitude;
    private double latitude;

    public KakaoReturn kakao_return;

    public KakaoMapAPI(double lon, double lat)
    {
        longitude = lon;
        latitude = lat;
    }

    private void LogMessage(string title, string message)
    {
#if UNITY_EDITOR
        EditorUtility.DisplayDialog(title, message, "Ok");
#else
		Debug.Log(message);
#endif
    }

    public bool GPS2Npos()
    {
        try
        {
            //  Update URL based on GPS
            url += "&x=" + longitude;     //x:longitude 
            url += "&y=" + latitude;    //y: latitude

            Dictionary<string, string> headers = new Dictionary<string, string>();
            headers.Add("Authorization", "KakaoAK "+key);

            WWW www = new WWW(url, null, headers);

            int delay = 1000;
            int timer = 0;
            bool done = false;

            while (delay > timer)
            {
                System.Threading.Thread.Sleep(1);
                timer++;
                if (www.isDone)
                {
                    done = true;


                    byte[] bytedata = www.bytes;
                    var str = System.Text.Encoding.Default.GetString(bytedata);
                    Debug.Log("[KakaoMapAPI] byteData_str: " + str);

                    kakao_return = JsonConvert.DeserializeObject<KakaoReturn>(str);
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
