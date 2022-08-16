using UnityEngine;
using ARS;

public class TestObjectRotation : MonoBehaviour
{
    void Update()
    {
        transform.rotation = Compass3D.ObjectRotation;
    }
}
