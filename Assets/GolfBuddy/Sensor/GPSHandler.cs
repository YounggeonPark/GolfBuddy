using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Android;

public class GPSHandler : MonoBehaviour
{
    //  Toggle
    [SerializeField] public OptionSetting setting;
    public bool test_mode;
    public bool onUnity;

    //  실제 데이터
    public float longitude = 0;  //실제데이터
    public float latitude = 0;

    public bool isUpdating = false;
    public bool isUpdated = false;

    //  테스트용 Coordinate 연산
    [SerializeField] Text text;
    public float startLong;
    public float startLat;
    private bool start = true;
    public float lastLong;
    public float lastLat;

    private void Start()
    {
        onUnity = false;
        test_mode = false;
    }

    private void Update()
    {
        if (!isUpdating)
        {
            Debug.Log("GPS GetLocation started");
            StartCoroutine(GetLocation());
            isUpdating = !isUpdating;

            if (start)
            {
                start = false;
                startLong = lastLong;
                startLat = lastLat;
            }
        }

        #region 테스트
        if (test_mode)
        {
            longitude = 128.07340f + (lastLong - startLong);
            latitude = 34.83658f + (lastLat - startLat);
        }
        #endregion

        #region 일반
        else
        {
            longitude = lastLong;
            latitude = lastLat;
        }
        #endregion

        text.text = "LON: " + longitude.ToString("F3") + ", LAT: " + latitude.ToString("F3");
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
            isUpdated = true;
            lastLat = Input.location.lastData.latitude;
            lastLong = Input.location.lastData.longitude;
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

    public bool CheckInArea(TerrainDataPos terrainData) {

        if(longitude > (float)terrainData.leftLong && longitude < (float)terrainData.rightLong && latitude > (float)terrainData.bottomLat && latitude < (float)terrainData.topLat)
        {
            return true;
        }
        else 
        {
            return false; 
        }
    }

    public void TestMode(bool boo)
    {
        test_mode = boo;
    }
}
