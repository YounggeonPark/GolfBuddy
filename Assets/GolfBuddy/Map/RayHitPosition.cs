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
    public Vector2 pixelUV;     //�ذ� �� �� ������ ����
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
    [SerializeField] GameObject map3d;  // ������ �� Terrain ��ǥ ��ȯ��
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

        //  Map�±� Raycast Hit
        RaycastHit hitResult;
        int layerMask = 1 << LayerMask.NameToLayer("Map");


        #region ��� ����
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


        #region 3���� ����
        if (Physics.Raycast(new Ray(laserAnchor.transform.position, laserAnchor.transform.forward), out hitResult, 10))
        {
            //  Terrain�� Raycast �浹
            if (hitResult.collider.gameObject != null && hitResult.collider.gameObject.GetComponent<Terrain>() != null)
            {
                //  Hitpos�� Ball Object�̵�
                Debug.Log("Hitpos raw: " + hitResult.point);
                point_object_3D.transform.position = hitResult.point;   

                //  GPS ��ǥ�� ���ϱ� ���ؼ� hitpos�� Terrain ��ǥ��� ��ȯ
                Vector3 pos_in_terrain = hitResult.point - map3d.transform.position + new Vector3(0.5f, 1f, 0); //  -> Terrain �����ϴ� (0,0)

                Debug.Log("pos_in_terrain" + pos_in_terrain);    //Terrain ���� ��ġ ���
                Debug.Log("Elevation" + (-375.07543 + 732.27199 * pos_in_terrain.y));

                //  pos_in_terrain�� terrainDataPos�κ��� Point ������ǥ ȹ��
                double[] point_gps = new double[2];
                point_gps[0] = terrainDataPos.leftLong + (terrainDataPos.rightLong - terrainDataPos.leftLong)* pos_in_terrain.x;
                point_gps[1] = terrainDataPos.bottomLat + (terrainDataPos.topLat - terrainDataPos.bottomLat) * pos_in_terrain.z;
                Debug.Log("[RayHitPosition]" + point_gps[0] + "  " + point_gps[1]);

                //  Terrain���� �����ͷκ��� ���� �� ���
                point_elevation = 569.663464f * Terrain.activeTerrain.SampleHeight(hitpos_3d);

                //  Terrain �� ���� �̴ϱ��� �׸���
                parabola.render = true;

                //  ARȯ�濡 Point������ �������� �׸���
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
