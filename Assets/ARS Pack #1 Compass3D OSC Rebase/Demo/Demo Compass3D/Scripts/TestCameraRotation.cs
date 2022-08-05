using UnityEngine;
using ARS;

public class TestCameraRotation : MonoBehaviour {

    void Update()
    {
        transform.rotation = Compass3D.CameraRotation;
        if (Input.GetMouseButtonDown(0))
            Compass3D.ResetNorth();
    }
}
