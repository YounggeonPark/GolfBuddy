using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NRKernal;
using UnityEngine.EventSystems;

public class RayHitPosition : MonoBehaviour, IPointerClickHandler, IPointerEnterHandler, IPointerExitHandler
{
    //  Ray
    [SerializeField] NRPointerRaycaster raycaster_r;
    //  2D Map Hit
    public Vector3 hitpos_2d;
    public Vector2 pixelUV;     //해결 볼 수 있으면 좋음
    public GameObject point_object_2D;

    //  3D Map Hit
    public Vector3 hitpos_3d;
    [SerializeField] UserPosUpdate userPos;
    [SerializeField] Text pointtext;
    [SerializeField] Text linetext;
    [SerializeField] GameObject terrain;
    [SerializeField] ArrowRenderer arrowRenderer;
    [SerializeField] Parabola parabola;
    [SerializeField] TerrainDataPos terrainData;
    public GameObject point_object_3D;
    public Vector3 clickGPS;
    public float point_elevation;
    public float distance;

    public PointerEventData pointerEvent;

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


        //  2D Map
        //if (raycaster_r.Raycast(pointerEvent, new RaycastResult))

        if (Physics.Raycast(new Ray(laserAnchor.transform.position, laserAnchor.transform.forward), out hitResult, layerMask))
        {
            if (hitResult.collider.gameObject != null && hitResult.collider.gameObject.GetComponent<Renderer>() != null)
            {
                hitpos_2d = hitResult.point;
                hitpos_3d = hitResult.point;

                pixelUV = hitResult.textureCoord;

                point_object_2D.transform.position = hitpos_2d;
            }
        }

        //  3D Map
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

                arrowRenderer.Run();
                //parabola.render = true;

                // Line Calc
                distance = CoordinateHandler.GPStoMeter(userPos.userLon, userPos.userLat, clickGPS.x, clickGPS.z); // 좌표간 거리

                Debug.Log("D2D:" + userPos.userLon + ", " + userPos.userLat + ", " + clickGPS.x + ", " + clickGPS.z + ", " + distance + ", ");

                linetext.transform.position = (userPos.transform.position + hitpos_3d) / 2 + new Vector3(0, 0.1f, 0);
                linetext.text = "Horizontal Distance:" + distance + "\n"+ "Vertical Distance";
            }
        }
    }

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
