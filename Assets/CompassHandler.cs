using UnityEngine;
using UnityEngine.UI;
using ARS;

public class CompassHandler : MonoBehaviour
{
    Quaternion compass4;
    Quaternion calibration;
    public Text compass_text;

    private void Start()
    {
        calibration = new Quaternion(0, 0, 0, 1);
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
        compass_text.text = compass4.x + " , "+compass4.y+" , "+compass4.z+" , "+compass4.w;
    }
}
