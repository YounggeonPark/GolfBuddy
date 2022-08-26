using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NRKernal;
using UnityEngine.EventSystems;

public class RayHitPosition : MonoBehaviour, IPointerClickHandler, IPointerEnterHandler, IPointerExitHandler
{

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

        //  Map태그 Raycast Hit
        RaycastHit hitResult;
        int layerMask = 1 << LayerMask.NameToLayer("Map");


        #region 평면 지도
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
        #endregion


        #region 3차원 지도
        if (Physics.Raycast(new Ray(laserAnchor.transform.position, laserAnchor.transform.forward), out hitResult, 10))
        {
            //  Terrain과 Raycast 충돌
            if (hitResult.collider.gameObject != null && hitResult.collider.gameObject.GetComponent<Terrain>() != null)
            {
                //  Hitpos로 Ball Object이동
                Debug.Log("Hitpos raw: " + hitResult.point);
                point_object_3D.transform.position = hitResult.point;   

                //  GPS 좌표를 구하기 위해서 hitpos를 Terrain 좌표계로 변환
                Vector3 pos_in_terrain = hitResult.point - map3d.transform.position + new Vector3(0.5f, 1f, 0); //  -> Terrain 좌측하단 (0,0)

                Debug.Log("pos_in_terrain" + pos_in_terrain);    //Terrain 내부 위치 출력
                Debug.Log("Elevation" + (-375.07543 + 732.27199 * pos_in_terrain.y));

                //  pos_in_terrain과 terrainDataPos로부터 Point 위성좌표 획득
                double[] point_gps = new double[2];
                point_gps[0] = terrainDataPos.leftLong + (terrainDataPos.rightLong - terrainDataPos.leftLong)* pos_in_terrain.x;
                point_gps[1] = terrainDataPos.bottomLat + (terrainDataPos.topLat - terrainDataPos.bottomLat) * pos_in_terrain.z;
                Debug.Log("[RayHitPosition]" + point_gps[0] + "  " + point_gps[1]);

                //  Terrain높이 데이터로부터 실제 고도 계산
                point_elevation = 569.663464f * Terrain.activeTerrain.SampleHeight(hitpos_3d);

                //  Terrain 맵 위의 미니궤적 그리기
                parabola.render = true;

                //  AR환경에 Point까지의 실제궤적 그리기
                spawnObject.Set_TrajArrow(point_gps[0], point_gps[1]);
            }
        }
        #endregion
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
