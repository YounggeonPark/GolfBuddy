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
        url += "?ServiceKey=" + "************"; // Service Key 제거했음
        url += "&pageNo=1";
        url += "&numOfRows=5";
        url += "&resultType=json";
    }

}
