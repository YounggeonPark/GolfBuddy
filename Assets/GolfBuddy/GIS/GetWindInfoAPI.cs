using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class GetWindInfoAPI
{
    public string url;

    // Start is called before the first frame update
    void Start()
    {
        url = "http://apis.data.go.kr/6260000/BusanWindInfoService/getWindInfo"; // URL
        url += "?ServiceKey=" + "bfVQ6nT8H8ip3wr7sA9c%2BwQawshXDZyBa%2FYpEZTtVAZhjhIdAgYvD6KZUbVpGGdR74kJ6leRDHyO0uVINGJo2w%3D%3D"; // Service Key
        url += "&pageNo=1";
        url += "&numOfRows=5";
        url += "&resultType=json";
    }

}
