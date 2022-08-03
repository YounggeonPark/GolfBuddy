using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CaddieController : MonoBehaviour
{
    public GameObject user;
    public GameObject caddie;

    private float speed;

    // Start is called before the first frame update
    void Start()
    {
        speed = 0.5f;
    }
    void Update()
    {
        lookUser();
    }

    private void lookUser()
    {
        Vector3 l_vector = user.transform.position - transform.position;
        transform.rotation = Quaternion.LookRotation(l_vector).normalized;
    }


}
