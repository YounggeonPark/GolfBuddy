using UnityEngine;
using ARS;

/// <summary>
/// RebaseÒSC example of use.
/// This example executes configures the Rebase based on some OSC messages
/// </summary>
public class TestRebaseOSCReceiver : MonoBehaviour {

    Rebase rebase = new Rebase();

    public Transform target, tx, ty, tz;
    public Transform result;

    OSC.OSCListener listener;

    bool calibrationFinished = false;

    void Start()
    {
        if (target == null || tx == null || ty == null || tz == null)
            return;
        
        //setup the the VIRTUAL-World coordinate system
        rebase.setTargetOrigin(target);
        rebase.setTargetX(tx);
        rebase.setTargetY(ty);
        rebase.setTargetZ(tz);

        //aquire and Setup osc messages
        listener = OSC.aquireListener(this,5000);

        //setup calibration messages
        listener.bind("/calibration/origin", "setOrigin");
        listener.bind("/calibration/x", "setX");
        listener.bind("/calibration/y", "setY");
        listener.bind("/calibration/z", "setZ");
        listener.bind("/calibration/finish", "finish");

        //setup onPoint message
        listener.bind("/point", "onPoint");
    }

    void OnDestroy()
    {
        listener.close();
    }


    void setOrigin(float x, float y, float z)
    {
        rebase.setOrigin(new Vector3(x, y, z));
    }

    void setX(float x, float y, float z)
    {
        rebase.setX(new Vector3(x, y, z));
    }

    void setY(float x, float y, float z)
    {
        rebase.setY(new Vector3(x, y, z));
    }

    void setZ(float x, float y, float z)
    {
        rebase.setZ(new Vector3(x, y, z));
    }

    void finish()
    {
        rebase.computeCalibrationMatrix();
        calibrationFinished = true;
    }

    void onPoint(float x, float y, float z)
    {
        if (!calibrationFinished)
            return;

        result.position = rebase.compute(new Vector3(x,y,z));
    }
    
}
