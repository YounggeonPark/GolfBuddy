using UnityEngine;
using UnityEngine.UI;
using ARS;

public class CompassHandler : MonoBehaviour
{
    Quaternion compass4;
    Vector3 calibration;
    public Text compass_text;

    private static Vector3 _accFilter;

    private void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        compass4 = Compass3D.ObjectRotation;
        compass_text.text = compass4.x + " , " + compass4.y + " , " + compass4.z + " , " + compass4.w;
        transform.rotation = compass4;
    }
    public void Calibration()
    {
        calibration = Input.acceleration;
    }
}
