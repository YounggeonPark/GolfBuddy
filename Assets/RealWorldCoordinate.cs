using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RealWorldCoordinate : MonoBehaviour
{
    [SerializeField] public GPSHandler gps;

    private double userLat; private double userLon;
    private double pointLat; private double pointLon;


    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        MoveLocation();
    }

    private void MoveLocation()
    {
        //transform.position = GPS2Unity(gps.longitude, gps.latitude);
    }

    private Vector3 GPS2Unity(double longitude, double latitude)
    {
        double x = CoordinateHandler.GPStoMeterEast(0, longitude);  //Null Island to Point
        double z = CoordinateHandler.GPStoMeterNorth(0, latitude); //Null Island to Point

        return new Vector3(((float)x), 0, ((float)z));
    }
}
