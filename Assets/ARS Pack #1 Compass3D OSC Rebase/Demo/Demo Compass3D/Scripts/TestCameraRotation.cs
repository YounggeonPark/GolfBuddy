using UnityEngine;
using ARS;

public class TestCameraRotation : MonoBehaviour {

    private void Start()
    {
        transform.rotation = Compass3D.CameraRotation;
    }

    void Update()
    {
    }

    public void ResetNorth()
    {
        Compass3D.ResetNorth();
    }
}
