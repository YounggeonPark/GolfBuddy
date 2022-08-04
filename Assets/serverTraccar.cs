using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class serverTraccar : MonoBehaviour
{
    private UnityWebRequest request;
    public GPSHandler gps;

    private bool server_state = true;
    private static string uri = "http://ec2-3-37-127-95.ap-northeast-2.compute.amazonaws.com:5055";
    private static long userId = 100001;

    private double longitude;
    private double latitude;
    private float currTime;

    public DateTime timestamp;
    public string timedata;
    public string data;

    // Start is called before the first frame update
    void Start()
    {
        request = new UnityWebRequest(uri);
    }

    // Update is called once per frame
    void Update()
    {
        currTime += Time.deltaTime;

        if (currTime > 5)
        {
            timestamp = DateTime.UtcNow;
            timedata = "" + timestamp.Year + "-" + timestamp.Month + "-" + timestamp.Day + " " + timestamp.Hour + ":" + timestamp.Minute + ":" + timestamp.Second;
            if (gps != null)
            {
                longitude = gps.longitude;
                latitude = gps.latitude;
                if (server_state)
                {
                    data = "/?id=" + userId + "&lat=" + latitude + "&lon=" + longitude + "&timestamp=" + timedata + "&hdop=0&altitude=68.4&speed=0";
                    UnityWebRequest.Get(uri + data);
                    Debug.Log(" Post on Server !!!");
                }
            }

            currTime = 0;
        }
    }
}
