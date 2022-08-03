using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class MapHandler : MonoBehaviour
{
    [SerializeField] RawImage rawimage2deploy;
    [SerializeField] GPSHandler gpsHandler;

    GoogleMapAPI mapAPI;
    GoogleMapAPI.mapType type;
    int tick = 0;
    float lat;
    float lon;

    private void Awake()
    {

    }


    private void Start()
    {
        mapAPI = new GoogleMapAPI();  //gpsÈ°¿ë mapÈ¹µæ¿ë
        type = GoogleMapAPI.mapType.roadmap;

        lat = gpsHandler.getLat();
        lon = gpsHandler.getLong();

        mapAPI.StaticMap(rawimage2deploy, lat, lon, 15, 2, type);
    }

    private void Update()
    {
        tick++;
        if (tick > 2000)
        {
            lat -= 0.001f;
            lon -= 0.001f;
            mapAPI.StaticMap(rawimage2deploy, lat, lon, 15, 10, type);
            tick = 0;
        }
    }
}