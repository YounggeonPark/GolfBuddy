using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Http;
using UnityEngine;

public class GovAPI
{
    public string state;
    public RealTimeWeather rtweather;
    public float degree;
    public float speed;

    private string key = "bfVQ6nT8H8ip3wr7sA9c%2BwQawshXDZyBa%2FYpEZTtVAZhjhIdAgYvD6KZUbVpGGdR74kJ6leRDHyO0uVINGJo2w%3D%3D";
    private string url = "";
    private int nx;
    private int ny;

    public GovAPI(int nx, int ny)
    {
        this.nx = nx;
        this.ny = ny;
    }


    public bool GovREST()
    {
        try
        {
            url = "https://apis.data.go.kr/1360000/VilageFcstInfoService_2.0/getUltraSrtNcst"; // URL
            url += "?serviceKey=" + key; // Service Key
            url += "&pageNo=1";
            url += "&numOfRows=1000";
            url += "&dataType=JSON";
            url += "&base_date=" + (DateTime.Now.Year * 10000 + DateTime.Now.Month * 100 + DateTime.Now.Day);
            int temp_time = (10000 + DateTime.Now.Hour * 100 + DateTime.Now.Minute);
            url += "&base_time=" + temp_time.ToString().Substring(1, 4);
            url += "&nx=" + nx;
            url += "&ny=" + ny;

            Debug.Log(url);


            WWW www = new WWW(url);

            int delay = 2000;
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
                    Debug.Log(str);

                    GovRoot govRoot = JsonConvert.DeserializeObject<GovRoot>(str);
                    

                    rtweather = new RealTimeWeather();
                    if(govRoot.response != null)
                    {
                        Debug.Log(govRoot.response.header.resultMsg);
                        state = govRoot.response.header.resultMsg;
                        if (govRoot.response.header.resultMsg.Equals("NORMAL_SERVICE"))
                        {
                            rtweather.insertValues(govRoot.response.body.items); //가능하면 resultMsg로 처리
                        }

                        if (rtweather.vec != null && rtweather.wsd != null)
                        {
                            degree = float.Parse(rtweather.vec);
                            Debug.Log(degree);
                            speed = float.Parse(rtweather.wsd);
                        }

                        return true;
                    }
                    else { Debug.Log("[GoveAPI] response is NULL"); }
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
