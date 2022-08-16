using UnityEngine;
using ARS;

/// <summary>
/// OSC Send example of use
/// </summary>
public class testOSCSend : MonoBehaviour {

    float timeInterval;

    OSC.OSCSender sender;

    Vector3 mousePos;

    public string address = "192.168.1.255";
    
    // Use this for initialization
    void Start () {
        // 1ST create a target network address and port to send OSC messages
        //      change the Address 192.168.1.255 to the deviceIP in your network
        sender = OSC.aquireSender(address, 5000);
    }

    void OnDestroy()
    {
        //when finish, close the sender to destroy the sender object instance
        sender.close();
    }

    // Update is called once per frame
    void Update () {
        Vector3 newPosition = Input.mousePosition;

        timeInterval += Time.deltaTime;
        if (timeInterval > 0.1f)//configure the osc message to be sent with the interval of 100ms
        {
            timeInterval = 0;

            if (!newPosition.Equals(mousePos))
            {
                mousePos = newPosition;
                
                // put the mouse x and y inside the range (-5,-5) (5,5)
                float x = mousePos.x;
                float y = mousePos.y;

                x = x - (float)Screen.width / 2;
                y = y - (float)Screen.height / 2;

                x /= (float)Screen.height;
                y /= (float)Screen.height;

                x *= 10.0f;
                y *= 10.0f;

                x = Mathf.Clamp(x, -5.0f, 5.0f);
                y = Mathf.Clamp(y, -5.0f, 5.0f);

                //send the mouse xy to the network
                sender.send("/pos2d", x, y);
            }            
        }
    }
}
