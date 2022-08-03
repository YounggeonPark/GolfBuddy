using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class AnimationSpawn : MonoBehaviour
{
    float tick = -300;
    Vector3 firstPos;

    GameObject anchor;

    // Start is called before the first frame update
    void Start()
    {
        if (anchor != null)
        {
            firstPos = anchor.transform.position;
        }
        firstPos = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        if(tick <= 0)
        {
            this.transform.position = firstPos + new Vector3(0, tick/300, 0);
            tick++;
        }
    }
}
