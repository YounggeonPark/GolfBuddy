using Proyecto26;
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

    public async Task<string> GetPublicPos()
    {
        //  Update URL based on GPS
        url += "&x="+ longitude;     //x:longitude 
        url += "&y="+ latitude;    //y: latitude

        //  REST API ½ÇÇà 
        RestClient.DefaultRequestHeaders["Authorization"] = "KakaoAK "+key;
        RestClient.Get<KakaoReturn>(url).Then(res => kakao_return = res);
        if(kakao_return != null)
        {
            return kakao_return.documents[0].code;
        }
        else 
        {
            string result = "null";
            return result;
        }
    }
}
