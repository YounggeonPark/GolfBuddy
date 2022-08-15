using System.Collections;
using System.Collections.Generic;
using System.Net.Http;
using UnityEngine;

public class GovAPI
{
    private string key = "bfVQ6nT8H8ip3wr7sA9c%2BwQawshXDZyBa%2FYpEZTtVAZhjhIdAgYvD6KZUbVpGGdR74kJ6leRDHyO0uVINGJo2w%3D%3D";
    private string url = "";
    private int nx;
    private int ny;

    static HttpClient client = new HttpClient();

    public GovAPI(int nx, int ny)
    {
        this.nx = nx;
        this.ny = ny;
    }


    public void GetWindData()
    {
        url = "http://apis.data.go.kr/1360000/VilageFcstInfoService_2.0/getUltraSrtNcst"; // URL
        url += "?ServiceKey=" + key; // Service Key
        url += "&pageNo=1";
        url += "&numOfRows=1000";
        url += "&dataType=JSON";
        url += "&base_date=20210628";
        url += "&base_time=0600";
        url += "&nx=" + nx;
        url += "&ny=" + ny;
    }
}
