using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UserPosUpdate : MonoBehaviour
{
    [SerializeField] GPSHandler gpshandler;
    [SerializeField] TerrainData terrainData;
    [SerializeField] Text usertext;
    CoordinateHandler coordinate;

    public float userLat; //updown
    public float userLon; //leftright
    public float user_elevation; // Elevation
    public Vector3 userUnityPos;
    public Vector3 temp;

    void Start()
    {
        coordinate = new CoordinateHandler(terrainData);
    }

    // Update is called once per frame
    void Update()
    {
        if (gpshandler.updateGPS)
        {
            #region GPS에서 Position좌표로 전환 //terrain(0) 기준
            // User 위성좌표
            userLon = gpshandler.GetLong();
            userLat = gpshandler.GetLat();
            #endregion

            userUnityPos = coordinate.gps2unity(userLon, userLat);

            temp = userUnityPos;
            temp.y = temp.y * 512;

            user_elevation = temp.y;

            this.transform.position = Terrain.activeTerrain.transform.position + temp/512;
            usertext.transform.position = this.transform.position + new Vector3(0, 0.1f, 0);
            usertext.text = "long:" + userLon + "\n" + "lat: " + userLat + "\n"+"Elevation: " + user_elevation;
        }
    }

}