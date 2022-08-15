using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Android;

public class GPSHandler : MonoBehaviour
{
    //실제 데이터
    public float longitude = 0;
    public float latitude = 0;

    public bool isUpdating;
    public bool updateGPS = false;

    //테스트용
    [SerializeField] Text text;
    public bool test_mode = true;
    public float test_longitude = 128.07340f; //10m
    public float test_latitude = 34.83658f; //67m
    private float start_real_long;
    private float start_real_lat;
    private float last_real_long;
    private float last_real_lat;

    private void Start()
    {
        StartCoroutine(GetLocation());
        if (test_mode)
        {
            start_real_long = last_real_long;
            start_real_lat = last_real_lat;

            //테스트 기준점 + 변화량
            longitude = test_longitude;
            latitude = test_latitude;

            text.text = "TEST MODE\n" + longitude + ",  " + latitude;
        }
    }

    private void Update()
    {
        if (!isUpdating)
        {
            StartCoroutine(GetLocation());
            isUpdating = !isUpdating;

            if (test_mode)
            {
                longitude = test_longitude + (last_real_long - start_real_long);
                latitude = test_latitude + (last_real_lat - start_real_lat);
            }
        }
    }
    IEnumerator GetLocation()
    {
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
            Permission.RequestUserPermission(Permission.CoarseLocation);
        }
        // First, check if user has location service enabled
        if (!Input.location.isEnabledByUser)
            yield return new WaitForSeconds(10);

        // Start service before querying location
        Input.location.Start();

        // Wait until service initializes
        int maxWait = 5;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        // Service didn't initialize in 20 seconds
        if (maxWait < 1)
        {
            print("Timed out");
            yield break;
        }

        // Connection has failed
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            print("Unable to determine device location");
            yield break;
        }
        else
        {
            updateGPS = true;
            if (test_mode)
            {
                last_real_lat = Input.location.lastData.latitude;
                last_real_long = Input.location.lastData.longitude;
            }
            else
            {
                latitude = Input.location.lastData.latitude;
                longitude = Input.location.lastData.longitude;
            }
        }

        // Stop service if there is no need to query location updates continuously
        isUpdating = !isUpdating;
        Input.location.Stop();
    }

    public float GetLong()
    {
        return longitude;
    }

    public float GetLat()
    {
        return latitude;
    }

    public bool CheckInArea(TerrainData terrainData) {

        if(longitude>terrainData.leftLong && longitude < terrainData.rightLong && latitude > terrainData.bottomLat && latitude < terrainData.topLat)
        {
            return true;
        }
        else { return false; }
    }
}
