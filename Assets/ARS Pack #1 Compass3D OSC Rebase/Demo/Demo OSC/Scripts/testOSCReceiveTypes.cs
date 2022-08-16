using UnityEngine;
using ARS;

/// <summary>
/// OSC Receive example of use
/// </summary>
public class testOSCReceiveTypes : MonoBehaviour {

    OSC.OSCListener listener;

    void Start () {
        // 1ST: aquire a listener associated with a port
        listener = OSC.aquireListener(this, 5000);

        // 2ND: bind all address you want to listen to
        //      The second parameter is the public method from this class

        // the address /singleFloat will call the 
        // singleFloat method, 
        // if the signature from the OSC messages matches the method signature (float)
        listener.bind("/singleFloat", "singleFloat");

        // the address /allTypesTest will call the 
        // allTypesTest method, 
        // if the signature from the OSC messages matches the method signature (int,float,byte[],string,OSC.Symbol,System.Int64,System.UInt64,double,char,OSC.RGBA,OSC.Midi,bool)
        listener.bind("/allTypesTest", "allTypesTest");

        // the address /bundleIntSeq will call the 
        // bundleIntSeq method, 
        // if the signature from the OSC messages matches the method signature (int,int,int,int)
        listener.bind("/bundleIntSeq", "bundleIntSeq" );

        // the address /bundleFloatSeq will call the 
        // bundleFloatSeq method, 
        // if the signature from the OSC messages matches the method signature (float,float,float,float)
        listener.bind("/bundleFloatSeq", "bundleFloatSeq" );
    }

    void OnDestroy()
    {
        //If you are not using the listener anymore, you need to close it. 
        //If not, the listener will continue to call the bind methods associated in the initialization
        listener.close();
    }

    /// <summary>
    /// Method that receives an OSC message with this signature (float)
    /// </summary>
    /// <param name="f">float parameter</param>
    /// <returns>void</returns>
    public void singleFloat(float f)
    {
        Debug.Log("Received singleFloat: " + f.ToString());
    }

    /// <summary>
    /// Method that receives an OSC message with this signature (int,float,byte[],string,OSC.Symbol,System.Int64,System.UInt64,double,char,OSC.RGBA,OSC.Midi,bool)
    /// </summary>
    /// <param name="i">int parameter</param>
    /// <param name="f">float parameter</param>
    /// <param name="b">blob parameter</param>
    /// <param name="s">string parameter</param>
    /// <param name="S">Symbol parameter</param>
    /// <param name="h">Int64 parameter</param>
    /// <param name="t">UInt64 parameter</param>
    /// <param name="d">double parameter</param>
    /// <param name="c">char parameter</param>
    /// <param name="r">RGBA parameter</param>
    /// <param name="m">Midi parameter</param>
    /// <param name="boolean">bool parameter</param>
    /// <returns>void</returns>
    public void allTypesTest( int i, float f, byte[] b, string s, 
        OSC.Symbol S, System.Int64 h, System.UInt64 t, double d, 
        char c, OSC.RGBA r, OSC.Midi m, bool boolean ) {

        Debug.Log("Received allTypesTest");
       
    }


    /// <summary>
    /// Method that receives an OSC message with this signature (int,int,int,int)
    /// </summary>
    /// <param name="v1">int parameter</param>
    /// <param name="v2">int parameter</param>
    /// <param name="v3">int parameter</param>
    /// <param name="v4">int parameter</param>
    /// <returns>void</returns>
    public void bundleIntSeq(int v1, int v2, int v3, int v4)
    {
        //when use bundles, can consult the timetag from the bundle
        if (listener.ComesFromBundle)
        {
            Debug.Log("Received bundleIntSeq " +  OSC.TimetagToDateTime(listener.BundleTimeTag));
        }
    }


    /// <summary>
    /// Method that receives an OSC message with this signature (float,float,float,float)
    /// </summary>
    /// <param name="v1">float parameter</param>
    /// <param name="v2">float parameter</param>
    /// <param name="v3">float parameter</param>
    /// <param name="v4">float parameter</param>
    /// <returns>void</returns>
    public void bundleFloatSeq(float v1, float v2, float v3, float v4)
    {
        //when use bundles, can consult the timetag from the bundle
        if (listener.ComesFromBundle)
        {
            Debug.Log("Received bundleFloatSeq " + OSC.TimetagToDateTime(listener.BundleTimeTag));
        }
    }
}
