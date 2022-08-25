using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UserPosUpdate : MonoBehaviour
{
    [SerializeField] SpawnObject spawnObject;
    [SerializeField] GPSHandler gpshandler;
    [SerializeField] Terrain terrain;
    [SerializeField] TerrainDataPos terrainData;
    [SerializeField] Text usertext;
    CoordinateHandler coordinate;

    public double userLat; //updown
    public double userLon; //leftright
    public float user_elevation; // Elevation
    public Vector3 userUnityPos;
    public Vector3 temp;

    void Start()
    {
        userLon = gpshandler.longitude;
        userLat = gpshandler.latitude;
        spawnObject.SetOrigin(userLon, userLat);

        coordinate = new CoordinateHandler(terrainData);
    }

    // Update is called once per frame
    void Update()
    {
        if (true)
        {
            #region GPS에서 Position좌표로 전환 //terrain(0) 기준
            // User 위성좌표
            userLon = gpshandler.GetLong();
            userLat = gpshandler.GetLat();
            #endregion

            userUnityPos = coordinate.gps2unity(userLon, userLat);

            temp = userUnityPos;
            temp.y = temp.y * terrainData.resolution;

            user_elevation = 569.663464f* Terrain.activeTerrain.SampleHeight(temp / terrainData.resolution);
            

            this.transform.position = Terrain.activeTerrain.transform.position + temp/ terrainData.resolution;
            float gap = terrain.SampleHeight(this.transform.position);
            this.transform.position = this.transform.position + new Vector3(0, gap/2, 0);

            usertext.transform.position = this.transform.position + new Vector3(0, 0.1f, 0);
            usertext.text = "long:" + userLon + "\n" + "lat: " + userLat + "\n"+"Elevation: " + user_elevation;
        }
    }

}