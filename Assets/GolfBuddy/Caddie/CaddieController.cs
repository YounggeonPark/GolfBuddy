using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CaddieController : MonoBehaviour
{
    public GameObject user;
    public GameObject caddie;


    // Start is called before the first frame update
    void Start()
    {

    }
    void Update()
    {
        transform.position = new Vector3(transform.position.x, user.transform.position.y, transform.position.z);
        //lookUser();
        transform.LookAt(user.transform.position);
    }
        
    private void lookUser()
    {
        Vector3 l_vector = user.transform.position - transform.position;
        transform.rotation = Quaternion.LookRotation(l_vector).normalized;
    }


}
