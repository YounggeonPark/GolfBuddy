using UnityEngine;
using ARS;

/// <summary>
/// Rebase example of use.
/// This example executes in real-time with the editor.
/// When you set the Transform components, it will start to work immediately.
/// </summary>
[ExecuteInEditMode]
public class TestRebase : MonoBehaviour {

    Rebase rebase = new Rebase();

    public Transform origin, x, y, z, target, tx, ty, tz;
    public Transform test, result;

    void Start()
    {
        if (origin == null || x == null || y == null || z == null ||
            target == null || tx == null || ty == null || tz == null)
            return;

        //first we need to setup the the REAL-World coordinate system
        rebase.setOrigin(origin);
        rebase.setX(x);
        rebase.setY(y);
        rebase.setZ(z);

        //second we need to setup the the VIRTUAL-World coordinate system
        rebase.setTargetOrigin(target);
        rebase.setTargetX(tx);
        rebase.setTargetY(ty);
        rebase.setTargetZ(tz);

        //third we call the computeCalibrationMatrix
        rebase.computeCalibrationMatrix();
    }

    void Update () {
        if (origin == null || x == null || y == null || z == null ||
            target == null || tx == null || ty == null || tz == null)
            return;

        Start();

        //After calibration, you need to call rebase.compute()
        // passing the position in Read World coordinates to be transformed to the
        //  Virtual world coordinates
        result.position = rebase.compute(test.position);

        //After calibration, you need to call rebase.computeOrientation()
        // passing the rotation in Read World coordinates to be transformed to the
        //  Virtual world coordinates
        result.rotation = rebase.computeOrientation(test.rotation);

        if (Application.isPlaying)
            test.RotateAround(test.parent.transform.position, Vector3.up, Time.deltaTime * 30.0f);

    }
}
