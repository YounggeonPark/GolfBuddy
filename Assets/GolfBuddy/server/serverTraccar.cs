using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class serverTraccar : MonoBehaviour
{
    public GPSHandler gps;

    public string ec2_address = "ec2-15-164-104-138";

    private static string uri = "http://ec2-15-164-104-138.ap-northeast-2.compute.amazonaws.com:5055";
    private static long userId = 100001;
    public bool server_state = false;

    private double longitude;
    private double latitude;
    private float currTime;

    public DateTime timestamp;
    public string timedata;
    public string data;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        currTime += Time.deltaTime;

        if (currTime > 10)
        {
            updatePos();
            currTime = 0;
        }
    }

    private void updatePos()
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
                string send = "http://"+ ec2_address + ".ap-northeast-2.compute.amazonaws.com:5055" + data;
                // Post on Server
                WWW www = new WWW(send);
                Debug.Log("[Server] UPLOAD_Traccar GPS location");
            }
        }
    }

    public void TraccarON()
    {
        server_state = true;
    }
}
