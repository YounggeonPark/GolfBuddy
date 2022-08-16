using UnityEngine;
using ARS;

/// <summary>
/// OSC Send example of use
/// </summary>
public class testOSCSendTypes : MonoBehaviour {

    float timeInterval;
    OSC.OSCSender sender;
    
    // Use this for initialization
    void Start () {

        // 1ST create a target network address and port to send OSC messages
        sender = OSC.aquireSender("localhost", 5000);
    }

    void OnDestroy()
    {
        //when finish, close the sender to destroy the sender object instance
        sender.close();
    }

    // Update is called once per frame
    void Update () {
        timeInterval += Time.deltaTime;
        if (timeInterval > 2.0f)
        {
            timeInterval = 0;

            //send an OSC message with the signature (float)
            sender.send("/singleFloat",35.0f);

            //send an OSC message with the signature (int,float,byte[],string, OSC.Symbol,System.Int64,System.UInt64,double, char, OSC.RGBA,OSC.Midi,bool)
            sender.send("/allTypesTest",
                50,//int i,
                49.0f,//float f,
                new byte[] { 4, 6, 3 },//blob,
                "hello OSC",//string s,
                new OSC.Symbol("symbol"),//OSC.Symbol S,
                (System.Int64)0x3bccbbffccaa00ffL,// h,
                (System.UInt64)0xfbccbbffccaa00ffUL,// t,
                0.56,//double d,
                (char)'x',//char c,
                new OSC.RGBA(20, 40, 60, 255), //OSC.RGBA r,
                new OSC.Midi(3, 110, 55, 66),//OSC.Midi m,
                true //bool b
            );


            //bundle several messages into one package
            OSC.OSCBundle bundle = new OSC.OSCBundle(System.DateTime.Now);
            //add the OSC message with the signature (int,int,int,int) to the bundle
            bundle.addMessage("/bundleIntSeq", 1, 2, 3, 4);
            //add the OSC message with the signature (float,float,float,float) to the bundle
            bundle.addMessage("/bundleFloatSeq", 1.0f, 2.0f, 3.0f, 4.0f);
            //send the bundle with two OSC messages inside
            sender.send(bundle);
            
        }
        
    }
}
