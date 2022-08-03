using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NRKernal;

public class RayHitPosition : MonoBehaviour
{
    [SerializeField] TerrainData terrainData;
    [SerializeField] LineRenderer lineRenderer;
    [SerializeField] UserPosUpdate userPos;
    [SerializeField] Text pointtext;
    [SerializeField] Text linetext;

    public Vector3 hitpos;
    public Vector3 clickGPS;
    public float point_elevation;
    public float distance;

    private CoordinateHandler coordinate;

    // Start is called before the first frame update
    void Start()
    {
        coordinate = new CoordinateHandler(terrainData);
    }

    // Update is called once per frame
    void Update()
    {
        if (!NRInput.GetButtonDown(ControllerButton.TRIGGER))
        {
            return;
        }

        var handControllerAnchor = NRInput.DomainHand == ControllerHandEnum.Left ? ControllerAnchorEnum.LeftLaserAnchor : ControllerAnchorEnum.RightLaserAnchor;
        Transform laserAnchor = NRInput.AnchorsHelper.GetAnchor(NRInput.RaycastMode == RaycastModeEnum.Gaze ? ControllerAnchorEnum.GazePoseTrackerAnchor : handControllerAnchor);

        RaycastHit hitResult;
        if (Physics.Raycast(new Ray(laserAnchor.transform.position, laserAnchor.transform.forward), out hitResult, 10))
        {
            if (hitResult.collider.gameObject != null && hitResult.collider.gameObject.GetComponent<Terrain>() != null)
            {
                /*
                var behaviour = hitResult.collider.gameObject.GetComponent<NRTrackableBehaviour>();
                if (behaviour.Trackable.GetTrackableType() != TrackableType.TRACKABLE_PLANE)
                {
                    return;
                }
                */
                hitpos = hitResult.point;
                this.transform.position = hitpos;
                clickGPS = coordinate.unity2gps(hitpos);
                Vector3 temp = coordinate.gps2unity(clickGPS.x, clickGPS.z);

                temp.y = temp.y * 512;
                point_elevation = temp.y;

                pointtext.transform.position = this.transform.position + new Vector3(0, 0.1f, 0);
                pointtext.text = "long:" + clickGPS.x + "\n" + "lat: " + clickGPS.z + "\n" + "Elevation: " + point_elevation;


                lineRenderer.startColor = Color.black;
                lineRenderer.endColor = Color.black;
                lineRenderer.startWidth = 0.01f;
                lineRenderer.endWidth = 0.01f;
                lineRenderer.positionCount = 2;
                lineRenderer.useWorldSpace = true;

                //For drawing line in the world space, provide the x,y,z values
                lineRenderer.SetPosition(0, userPos.transform.position); //x,y and z position of the starting point of the line
                lineRenderer.SetPosition(1, hitpos); //x,y and z position of the end point of the line

                // Line Calc

                distance = GPStoMeter(userPos.userLon, userPos.userLat, clickGPS.x, clickGPS.z);
                distance = GPStoMeter(0,0,0,0);

                linetext.transform.position = (userPos.transform.position + hitpos) / 2 + new Vector3(0, 0.1f, 0);
                linetext.text = "Horizontal Distance:" + distance + "\n"+ "Vertical Distance";
            }
        }
    }

    private float GPStoMeter(float lon1, float lat1, float lon2, float lat2)
    {
        var earthRadiusKm = 6371;

        var dLat = gpsDegree2Radian(lat2 - lat1);
        var dLon = gpsDegree2Radian(lon2 - lon1);

        lat1 = gpsDegree2Radian(lat1);
        lat2 = gpsDegree2Radian(lat2);

        var a = Mathf.Sin(dLat / 2) * Mathf.Sin(dLat / 2) +
                Mathf.Sin(dLon / 2) * Mathf.Sin(dLon / 2) * Mathf.Cos(lat1) * Mathf.Cos(lat2);
        var c = 2 * Mathf.Atan2(Mathf.Sqrt(a), Mathf.Sqrt(1 - a));

        return earthRadiusKm * c;
    }

    private float gpsDegree2Radian(float degree)
    {
        return degree * Mathf.PI / 180;
    }
}
