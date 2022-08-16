using UnityEngine;
using ARS;

/// <summary>
/// OSC Receive example of use
/// </summary>
public class testOSCReceive : MonoBehaviour {

    OSC.OSCListener listener;
    public Transform sphere;

    void Start () {
        // 1ST: aquire a listener associated with a port
        listener = OSC.aquireListener(this, 5000);

        // 2ND: bind all address you want to listen to
        //      The second parameter is the public method from this class

        // the address /pos2d will call the 
        // pos2d method, 
        // if the signature from the OSC messages matches the method signature (float,float)
        listener.bind("/pos2d", "pos2d");

    }

    void OnDestroy()
    {
        //If you are not using the listener anymore, you need to close it. 
        //If not, the listener will continue to call the bind methods associated in the initialization
        listener.close();
    }

    /// <summary>
    /// Method that receives an OSC message with this signature (float,float)
    /// </summary>
    /// <param name="x">float parameter</param>
    /// <param name="y">float parameter</param>
    /// <returns>void</returns>
    public void pos2d(float x, float y)
    {
        sphere.position = new Vector3(x, y, 0);
    }
    
}
