using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NRKernal;
using UnityEngine.EventSystems;

public class RayHitPosition : MonoBehaviour, IPointerClickHandler, IPointerEnterHandler, IPointerExitHandler
{
    //  Notice
    [SerializeField] Text notice;

    //  Ray
    //[SerializeField] NRPointerRaycaster raycaster_r;
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
    [SerializeField] SpawnObject spawnObject;
    [SerializeField] Parabola parabola;
    [SerializeField] TerrainDataPos terrainDataPos;
    [SerializeField] GameObject map3d;  // 움직일 때 Terrain 좌표 변환용
    public GameObject point_object_3D;

    public double point_elevation;
    public double distance;

    public PointerEventData pointerEvent;

    private CoordinateHandler coordinate;

    // Start is called before the first frame update
    void Start()
    {
        coordinate = new CoordinateHandler(terrainDataPos);
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
                //  GPS 좌표를 구하기 위해서 hitpos를 Terrain 좌표계로 변환
                Vector3 pos_in_terrain = hitResult.point - map3d.transform.position + new Vector3(0.5f, 1f, 0);

                Debug.Log("pos_in_terrain" + pos_in_terrain.x + ", " + pos_in_terrain.y + ", " + pos_in_terrain.z);    //Terrain 내부 위치 출력
                Debug.Log("Elevation" + (-375.07543 + 732.27199 * pos_in_terrain.y));

                //  Point Object 3차원맵 위에 transform
                point_object_3D.transform.position = hitpos_3d - map3d.transform.position ;
                Debug.Log("hitpos_3d" + hitpos_3d.x + ", " + hitpos_3d.y + ", " + hitpos_3d.z);    //hitpos_3d world 위치 출력
                Debug.Log("point_object_3D" + point_object_3D.transform.position.x + ", " + point_object_3D.transform.position.y + ", " + point_object_3D.transform.position.z);    //hitpos_3d world 위치 출력

                double[] tem = new double[2];
                tem[0] = terrainDataPos.leftLong + (terrainDataPos.rightLong - terrainDataPos.leftLong)* pos_in_terrain.x;
                tem[1] = terrainDataPos.bottomLat + (terrainDataPos.topLat - terrainDataPos.bottomLat) * pos_in_terrain.z;

                Debug.Log("[RayHitPosition]" + tem[0] + "  " + tem[1]);

                //tem = coordinate.Unity3d2gps(hitpos_3d);
                Vector3 temp = coordinate.gps2unity(tem[0], tem[1]);

                temp.y = temp.y * terrainDataPos.resolution;
                point_elevation = 569.663464f * Terrain.activeTerrain.SampleHeight(hitpos_3d);

                pointtext.transform.position = point_object_3D.transform.position + new Vector3(0, 0.1f, 0);
                pointtext.text = "Click POS"+ tem[0].ToString() + " / " +tem[1].ToString();


                parabola.render = true;

                notice.text = ""+ tem[0] + ",  " + tem[1];
                spawnObject.Set_TrajArrow(tem[0], tem[1]);

                // Line Calc
                distance = CoordinateHandler.GPStoMeter(userPos.userLon, userPos.userLat, tem[0], tem[1]); // 좌표간 거리

                linetext.transform.position = (userPos.transform.position + hitpos_3d) / 2 + new Vector3(0, 0.1f, 0);
                //linetext.text = "Horizontal Distance:" + distance + "\n"+ "Vertical Distance";
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
