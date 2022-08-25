using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SpawnObject : MonoBehaviour
{
    [SerializeField] Text notice;

    // ������ gps ����.
    [SerializeField] GPSHandler gps;
    [SerializeField] TerrainDataPos dataTerrain;
    public double origin_long;
    public double origin_lat;

    //  ������ ������Ʈ ���� 
    [SerializeField] GameObject trophy;
    [SerializeField] GameObject traj_arrow;
    [SerializeField] ArrowRenderer arrow;

    [SerializeField] SceneHandler scene;
    public bool spawned = false;

    public void Update()
    {
        if (!spawned && scene.inGolfArea)
        {
            SetOrigin(gps.longitude, gps.latitude);

            SetPos_Trophy(dataTerrain.holeLong, dataTerrain.holeLat);

            spawned = true;
        }
    }

    public void SetOrigin(double longitude, double latitude)
    {
        origin_long = longitude;
        origin_lat = latitude;
        Debug.Log("Set Origined: " + origin_long + "," + origin_lat);
    }
    public void SetPos_Trophy(double longitude, double latitude)
    {
        trophy.SetActive(true);

        //World Z���� Y���� World X���� X���� World Y���� -z����
        float x = (float)CoordinateHandler.GPStoMeterEast(origin_long, longitude);
        float y = (float)CoordinateHandler.GPStoMeterNorth(origin_lat, latitude);

        // ��ǥ ��ȣ Ȯ��
        if (longitude < origin_long)
        {
            x = -x;
        }
        if (latitude < origin_lat)
        {
            y = -y;
        }

        trophy.transform.position = new Vector3(20, 50f, 0);    //////@@@@@@ ����� ��ġ����
        //trophy.transform.position = new Vector3(x, 50f, y);

        Debug.Log("Spawn Trophy");
    }
    public void Set_TrajArrow(double longitude, double latitude)
    {
        float x = CoordinateHandler.GPStoMeterEast(origin_long, longitude);
        float z = CoordinateHandler.GPStoMeterNorth(origin_lat, latitude);

        arrow.height = x / 10;

        /////���Ⱑ ����..
        if (longitude - origin_long < 0)
        {
            notice.text = "tick1";
            x = -x;
            notice.text = "tock1";
        }
        if (latitude - origin_lat < 0)
        {
            notice.text = "tick2";
            z = -z;
            notice.text = "tock2";
        }
        //////
        ///
        notice.text = "x:" + x + "z:" + z;

        Vector3 start = new Vector3(0, 0, 0);
        notice.text = "start vector ����";
        Vector3 destination = new Vector3(x,0,z);
        notice.text = "destination vector ����";

        notice.text = "setPos ����";
        arrow.SetPositions(start, destination);
        notice.text = "setPos �Ϸ�";

        traj_arrow.SetActive(true);
    }
}
