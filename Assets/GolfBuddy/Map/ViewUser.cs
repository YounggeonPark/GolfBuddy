using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ViewUser : MonoBehaviour
{

    public GameObject user;
    public GameObject caddie;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        lookUser();
    }

    private void lookUser()
    {
        Vector3 l_vector = user.transform.position - transform.position;
        transform.rotation = Quaternion.LookRotation(-l_vector).normalized;
    }

}
