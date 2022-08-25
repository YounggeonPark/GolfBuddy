using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallPosUpdate : MonoBehaviour
{
    [SerializeField] RayHitPosition rayhit;

    public Vector3 unityPos;
    public double elevation;

    private void Update()
    {
        unityPos = rayhit.hitpos_3d;
        elevation = rayhit.point_elevation;
    }
}
