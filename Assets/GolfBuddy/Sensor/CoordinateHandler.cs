using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoordinateHandler
{
    // Start is called before the first frame update

    float terrainLeft;
    float terrainBottom;
    float terrainZscale;
    float terrainXscale;
    float terrainYscale;
    float terrain_Resolution; //512

    float scaleFromParent;

    public float userY;

    public float pixelX;
    public float pixelZ;
    public float pixelY;
    public float real_elevation; // Elevation

    public CoordinateHandler(TerrainData terrainData)
    {
        #region Terrain데이터 초기화
        terrain_Resolution = 512f; //Terrain.activeTerrain.terrainData.alphamapResolution;
        terrainLeft = (float)terrainData.leftLong;
        terrainBottom = (float)terrainData.bottomLat;
        terrainXscale = (float)((terrainData.rightLong - terrainData.leftLong) / terrain_Resolution);  // = 1/512
        terrainZscale = (float)((terrainData.topLat - terrainData.bottomLat) / terrain_Resolution);
        terrainYscale = 17.28125f / terrain_Resolution;
        #endregion
    }

    #region GPS에서 Unity

    public Vector3 gps2unity(float longitude, float latitude) // long 좌우 lat 상하
    {
        pixelX = (longitude - terrainLeft) / terrainXscale; // X =  n
        pixelZ = (latitude - terrainBottom) / terrainZscale; // Z = m
        pixelY = Terrain.activeTerrain.terrainData.GetHeight((int)pixelX, (int)pixelZ) * terrainYscale;

        userY = Terrain.activeTerrain.terrainData.GetHeight((int)pixelX, (int)pixelZ);



        return new Vector3( pixelX, userY, pixelZ);
    }
    public float gpsLon2unity(float lon)
    {
        return (lon - terrainLeft) / terrainXscale;
    }
    public float gpsLat2unity(float lat)
    {

        return (lat - terrainBottom) / terrainZscale;
    }


    public float getObjectY(float objX, float objZ)
    {
        return Terrain.activeTerrain.terrainData.GetHeight((int)objX, (int)objZ);
    }

    #endregion

    #region UnitytoGPS
    public Vector3 unity3d2gps(Vector3 objectPos)
    {
        Vector3 gpsVector = (objectPos*512) - Terrain.activeTerrain.transform.position;
        float gps_long = terrainLeft + (gpsVector.x * terrainXscale);
        float gps_lat = terrainBottom + (gpsVector.z * terrainZscale);

        return new Vector3(gps_long, 0, gps_lat);
    }

    public Vector3 unity2d2gps(Vector3 objectPos)
    {
        
        return new Vector3(0, 0, 0);
    }
    #endregion
}
