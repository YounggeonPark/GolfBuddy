using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Android;

public class GPSHandler : MonoBehaviour
{
    //  Toggle
    public bool test_mode;
    public bool gps_state;

    //  배포 데이터
    public double longitude = 0;  //실제데이터
    public double latitude = 0;

    //  내부 데이터 - 테스트 환경용 Coordinate 연산
    public double startLong;
    public double startLat;
    private bool start = true;
    public double lastLong;
    public double lastLat;
    public bool isUpdating = false;
    public bool isUpdated = false;

    //  2D Map 하단에 좌표 위시 Overlay용
    [SerializeField] Text text;


    private void Start()
    {
        test_mode = false;

        StartCoroutine(GetLocation());
        isUpdating = !isUpdating;
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
            if (Application.isEditor) //유니티 내부면
            {
                longitude = 128.07340f;
                latitude = 34.83658f;
            }
            else 
            {
                longitude = 128.07340f + (lastLong - startLong);
                latitude = 34.83658f + (lastLat - startLat);
            }
        }
        #endregion

        #region 일반
        else
        {
            longitude = lastLong;
            latitude = lastLat;
        }
        #endregion
    }


    IEnumerator GetLocation()
    {
        //  권한 확인 및 부여
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
            Permission.RequestUserPermission(Permission.CoarseLocation);
        }

        //  GPS 상태 확인
        if (!Input.location.isEnabledByUser)
            yield return new WaitForSeconds(10);

        //  Location 서비스 시작
        Input.location.Start();

        //  서비스 Initialize
        int maxWait = 20;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }
        if (maxWait < 1)
        {

            print("Timed out");
            yield break;
        }

        //  서비스 실패시 알림
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            print("Unable to determine device location");
            yield break;
        }
        //  내부 데이터 업데이트
        else
        {
            isUpdated = true;

            lastLong = Input.location.lastData.longitude * 1.0d;
            lastLat = Input.location.lastData.latitude * 1.0d;
        }

        //  Location 서비스 중지
        if (!gps_state)
        {
            isUpdating = !isUpdating;
            Input.location.Stop();
            Debug.Log("GPS 서비스 중지");
        }
    }


    //  Longitude 좌표 호출 Method
    public double GetLong()
    {
        return longitude ;
    }

    //  Latitude 좌표 호출 Method
    public double GetLat()
    {
        return latitude;
    }

    //  지정 Terrain 공간 내부인지 확인 Method
    public bool CheckInArea(TerrainDataPos terrainData) {

        if(longitude > terrainData.leftLong && longitude < terrainData.rightLong && latitude > terrainData.bottomLat && latitude < terrainData.topLat)
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
