using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoordinateHandler
{
    //  TerrainData
    double terrainLeft;
    double terrainBottom;
    double terrainZscale;
    double terrainXscale;
    double terrainYscale;
    int terrain_Resolution; //512

    //

    public float userY;

    public double pixelX;
    public double pixelZ;
    public double pixelY;
    public double real_elevation; // Elevation

    public CoordinateHandler(TerrainDataPos terrainData)
    {
        #region Terrain데이터 초기화
        terrain_Resolution = terrainData.resolution; //Terrain.activeTerrain.terrainData.alphamapResolution;
        terrainLeft = terrainData.leftLong;
        terrainBottom = terrainData.bottomLat;
        terrainXscale = ((terrainData.rightLong - terrainData.leftLong) / terrain_Resolution);  // = 1/512
        terrainZscale = ((terrainData.topLat - terrainData.bottomLat) / terrain_Resolution);
        terrainYscale = 17.28125 / terrain_Resolution;
        #endregion
    }

    #region GPS에서 Unity

    public double Get_terrainHeight(double longitude, double latitude)
    {
        pixelX = (longitude - terrainLeft) / terrainXscale;
        pixelZ = (latitude - terrainBottom) / terrainZscale;

        return Terrain.activeTerrain.terrainData.GetHeight((int)pixelX, (int)pixelZ);
    }

    public Vector3 gps2unity(double longitude, double latitude) // long 좌우 lat 상하
    {
        double[] location = new double[2];

        pixelX = (longitude - terrainLeft) / terrainXscale; // X =  n
        pixelZ = (latitude - terrainBottom) / terrainZscale; // Z = m
        pixelY = (Terrain.activeTerrain.terrainData.GetHeight((int)pixelX, (int)pixelZ) * terrainYscale);

        location[0] = 

        userY = Terrain.activeTerrain.terrainData.GetHeight((int)pixelX, (int)pixelZ);

        return new Vector3( (float)pixelX, userY, (float)pixelZ);
    }
    public double gpsLon2unity(float lon)
    {
        return (lon - terrainLeft) / terrainXscale;
    }
    public double gpsLat2unity(float lat)
    {

        return (lat - terrainBottom) / terrainZscale;
    }


    public double getObjectY(float objX, float objZ)
    {
        return Terrain.activeTerrain.terrainData.GetHeight((int)objX, (int)objZ);
    }

    #endregion

    #region UnitytoGPS
    public double[] Unity3d2gps(Vector3 objectPos)
    {
        Vector3 gpsVector = (objectPos*512) - Terrain.activeTerrain.transform.position;

        double[] temp = new double[2];
        temp[0] = terrainLeft + (gpsVector.x * terrainXscale);
        temp[1] = terrainBottom + (gpsVector.z * terrainZscale);

        return temp;
    }

    public static Vector3 unity2d2gps(Vector3 objectPos)
    {
        // 사용 안됨 아직
        return new Vector3(0, 0, 0);
    }
    #endregion


    public static double GPStoMeter(double lon1, double lat1, double lon2, double lat2)
    {
        float horizontal = Mathf.Abs((float)(lon1 * 10000 - lon2 * 10000)) * 11;
        float vertical = Mathf.Abs((float)(lat1 * 10000 - lat2 * 10000)) * 6; // meter

        return Mathf.Sqrt(Mathf.Pow(horizontal, 2) + Mathf.Pow(vertical, 2));
    }
    public static float GPStoMeterEast(double lon1, double lon2)
    {
        return Mathf.Abs((float)(lon1 * 10000 - lon2 * 10000)) * 11;
    }
    public static float GPStoMeterNorth(double lat1, double lat2)
    {
        return Mathf.Abs((float)(lat1 * 10000 - (float)lat2 * 10000)) * 6; // meter
    }

    #region Terrain에서 고도 추출용
    public void PrintAllHeight()
    {
        for(int i =0; i< terrain_Resolution; i++)
        {
            for(int j=0; j<terrain_Resolution; j++)
            {
                Terrain.activeTerrain.terrainData.GetHeight((int)pixelX, (int)pixelZ);
            }
        }
    }

    #endregion
}