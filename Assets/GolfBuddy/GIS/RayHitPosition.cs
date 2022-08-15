using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NRKernal;
using UnityEngine.EventSystems;

public class RayHitPosition : MonoBehaviour, IPointerClickHandler, IPointerEnterHandler, IPointerExitHandler
{
    // 2D Map Hit
    public Vector3 hitpos_2d;
    public Vector2 pixelUV;
    public GameObject point_object_2D;

    //  3D Map Hit
    [SerializeField] LineRenderer lineRenderer;
    [SerializeField] UserPosUpdate userPos;
    [SerializeField] Text pointtext;
    [SerializeField] Text linetext;
    [SerializeField] TerrainData terrainData;
    public GameObject point_object_3D;
    public Vector3 hitpos_3d;
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

        int layerMask = 1 << LayerMask.NameToLayer("Map");

        //2Dmap
        if (Physics.Raycast(new Ray(laserAnchor.transform.position, laserAnchor.transform.forward), out hitResult, layerMask))
        {
            if (hitResult.collider.gameObject != null && hitResult.collider.gameObject.GetComponent<Renderer>() != null)
            {
                hitpos_2d = hitResult.point;
                hitpos_3d = hitResult.point;

                pixelUV = hitResult.textureCoord;

                point_object_2D.transform.position = hitpos_2d;
                //clickGPS = coordinate.unity3d2gps(hitpos_2d);
            }
        }

        if (Physics.Raycast(new Ray(laserAnchor.transform.position, laserAnchor.transform.forward), out hitResult, 10))
        {
            if (hitResult.collider.gameObject != null && hitResult.collider.gameObject.GetComponent<Terrain>() != null)
            {
                hitpos_3d = hitResult.point;
                point_object_3D.transform.position = hitpos_3d;
                clickGPS = coordinate.unity3d2gps(hitpos_3d);
                Vector3 temp = coordinate.gps2unity(clickGPS.x, clickGPS.z);

                temp.y = temp.y * 512;
                point_elevation = temp.y;

                pointtext.transform.position = point_object_3D.transform.position + new Vector3(0, 0.1f, 0);
                pointtext.text = "long:" + clickGPS.x + "\n" + "lat: " + clickGPS.z + "\n" + "Elevation: " + point_elevation;


                lineRenderer.startColor = Color.black;
                lineRenderer.endColor = Color.black;
                lineRenderer.startWidth = 0.01f;
                lineRenderer.endWidth = 0.01f;
                lineRenderer.positionCount = 2;
                lineRenderer.useWorldSpace = true;

                //For drawing line in the world space, provide the x,y,z values
                lineRenderer.SetPosition(0, userPos.transform.position); //x,y and z position of the starting point of the line
                lineRenderer.SetPosition(1, hitpos_3d); //x,y and z position of the end point of the line

                // Line Calc

                distance = GPStoMeter(userPos.userLon, userPos.userLat, clickGPS.x, clickGPS.z);
                distance = GPStoMeter(0,0,0,0);

                linetext.transform.position = (userPos.transform.position + hitpos_3d) / 2 + new Vector3(0, 0.1f, 0);
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




    //

    /// <summary> when pointer click, set the cube color to random color. </summary>
    /// <param name="eventData"> Current event data.</param>
    public void OnPointerClick(PointerEventData eventData)
    {
        //m_MeshRender.material.color = new Color(Random.Range(0f, 1f), Random.Range(0f, 1f), Random.Range(0f, 1f));
    }

    /// <summary> when pointer hover, set the cube color to green. </summary>
    /// <param name="eventData"> Current event data.</param>
    public void OnPointerEnter(PointerEventData eventData)
    {
        //m_MeshRender.material.color = Color.green;
    }

    /// <summary> when pointer exit hover, set the cube color to white. </summary>
    /// <param name="eventData"> Current event data.</param>
    public void OnPointerExit(PointerEventData eventData)
    {
        //m_MeshRender.material.color = Color.white;
    }
}
