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

    //  ���� ������
    public double longitude = 0;  //����������
    public double latitude = 0;

    //  ���� ������ - �׽�Ʈ ȯ��� Coordinate ����
    public double startLong;
    public double startLat;
    private bool start = true;
    public double lastLong;
    public double lastLat;
    public bool isUpdating = false;
    public bool isUpdated = false;

    //  2D Map �ϴܿ� ��ǥ ���� Overlay��
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

        #region �׽�Ʈ
        if (test_mode)
        {
            if (Application.isEditor) //����Ƽ ���θ�
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

        #region �Ϲ�
        else
        {
            longitude = lastLong;
            latitude = lastLat;
        }
        #endregion
    }


    IEnumerator GetLocation()
    {
        //  ���� Ȯ�� �� �ο�
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
            Permission.RequestUserPermission(Permission.CoarseLocation);
        }

        //  GPS ���� Ȯ��
        if (!Input.location.isEnabledByUser)
            yield return new WaitForSeconds(10);

        //  Location ���� ����
        Input.location.Start();

        //  ���� Initialize
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

        //  ���� ���н� �˸�
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            print("Unable to determine device location");
            yield break;
        }
        //  ���� ������ ������Ʈ
        else
        {
            isUpdated = true;

            lastLong = Input.location.lastData.longitude * 1.0d;
            lastLat = Input.location.lastData.latitude * 1.0d;
        }

        //  Location ���� ����
        if (!gps_state)
        {
            isUpdating = !isUpdating;
            Input.location.Stop();
            Debug.Log("GPS ���� ����");
        }
    }


    //  Longitude ��ǥ ȣ�� Method
    public double GetLong()
    {
        return longitude ;
    }

    //  Latitude ��ǥ ȣ�� Method
    public double GetLat()
    {
        return latitude;
    }

    //  ���� Terrain ���� �������� Ȯ�� Method
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
