using UnityEngine;
using UnityEngine.UI;

public class SceneHandler : MonoBehaviour
{
    //  Notice
    [SerializeField] Text notice;

    //  GolfZone 
    [SerializeField] GPSHandler handler;
    [SerializeField] TerrainDataPos southpark_hole1;

    [SerializeField] MapTransform trans = null;

    //  Interface
    //  Parent 
    [SerializeField]  GameObject parentsbuttons;



    public bool inGolfArea = false;


    private void Start()
    {
        inGolfArea = false;
        CloseALL();
    }

    private void Update()
    {
        inGolfArea = handler.CheckInArea(southpark_hole1);
        if (inGolfArea)
        {
            //Debug.Log("Checked user is on golfzone");
        }
    }
    #region Parent Toggle
    public void OpenParentObject(GameObject obj)
    {
        bool temp = obj.transform.GetChild(1).gameObject.active;

        CloseALL();

        for (int i = 1; i < obj.transform.childCount; i++)   //첫번째는 Text
        {
            obj.transform.GetChild(i).gameObject.SetActive(!temp);
        }
    }

    // Close All Taps
    public void CloseALL()
    {
        for (int i = 0; i < parentsbuttons.transform.childCount; i++)   //첫번째는 Text
        {
            for (int j = 1; j < parentsbuttons.transform.GetChild(i).childCount; j++)   //첫번째는 Text
            {
                parentsbuttons.transform.GetChild(i).GetChild(j).gameObject.SetActive(false);
            }
        }
    }
    #endregion

    #region Child Toggle
    public void ToggleChild(GameObject obj)
    {
        obj.SetActive(!obj.active);
        CloseALL();
    }

    public void Toggle3D(GameObject map3d)
    {
        if (inGolfArea)
        {
            map3d.SetActive(!map3d.active);
        }
        else
        {
            notice.text = "Out of GolfZone";
        }
    }
    #endregion
}
