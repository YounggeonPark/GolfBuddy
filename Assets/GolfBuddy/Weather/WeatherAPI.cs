using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Net;
using System.Net.Http;
using System.IO;


public class WeatherAPI : MonoBehaviour
{
    static HttpClient client = new HttpClient();

    public string key = "bfVQ6nT8H8ip3wr7sA9c%2BwQawshXDZyBa%2FYpEZTtVAZhjhIdAgYvD6KZUbVpGGdR74kJ6leRDHyO0uVINGJo2w%3D%3D";
    public string url;

    void Start()
    {
        //  Kakao REST API ( GPS -> 青沥备开 )


        //  竣伎: 青沥备开 -> 拜磊谅钎
        

        //  OpenAPI
        url = "http://apis.data.go.kr/1360000/VilageFcstInfoService_2.0/getUltraSrtNcst"; // URL
        url += "?ServiceKey=" + key; // Service Key
        url += "&pageNo=1";
        url += "&numOfRows=1000";
        url += "&dataType=JSON";
        url += "&base_date=20210628";
        url += "&base_time=0600";
        url += "&nx=55"; // 包螟 谅钎
        url += "&ny=127"; // 
    }

    void Update()
    {
        var request = (HttpWebRequest)WebRequest.Create(url);
        request.Method = "GET";

        string results = string.Empty;
        HttpWebResponse response;
        using (response = request.GetResponse() as HttpWebResponse)
        {
            StreamReader reader = new StreamReader(response.GetResponseStream());
            results = reader.ReadToEnd();
        }

    }
}
