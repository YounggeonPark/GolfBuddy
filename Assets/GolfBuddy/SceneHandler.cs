using UnityEngine;

public class SceneHandler : MonoBehaviour
{
    //  GolfZone ¹üÀ§
    [SerializeField] GPSHandler handler;
    [SerializeField] TerrainData southpark_hole1;

    [SerializeField] MapTransform trans = null;

    [SerializeField] GameObject object1 = null;
    [SerializeField] GameObject object2 = null;
    [SerializeField] GameObject object3 = null;

    private bool trigger1 = false;
    private bool trigger2 = false;
    private bool trigger3 = false;

    public bool inGolfArea = false;


    private void Start()
    {

    }

    private void Update()
    {
        inGolfArea = handler.CheckInArea(southpark_hole1);
    }

    public void Map2D()
    {
        //  2D ON
        object1.SetActive(!trigger1);
        trigger1 = !trigger1;

        // 3D OFF
        object2.SetActive(false);
        trigger2 = false;
    }

    public void Map3D()
    {
        if (inGolfArea)
        {
            // 2D OFF
            object1.SetActive(false);
            trigger1 = false;

            // 3D ON
            object2.SetActive(!trigger2);
            trigger2 = !trigger2;

            trans.terrainMove();
        }
        else
        {
            Debug.Log("3D Map is unsupported on this area");
        }
    }

    public void Compass()
    {
        object3.SetActive(!trigger3);
        trigger3 = !trigger3;
    }
}
