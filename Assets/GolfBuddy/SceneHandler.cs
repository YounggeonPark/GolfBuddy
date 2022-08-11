using UnityEngine;

public class SceneHandler : MonoBehaviour
{
    [SerializeField] GameObject object1 = null;
    [SerializeField] GameObject object2 = null;
    [SerializeField] GameObject object3 = null;

    private bool trigger1 = false;
    private bool trigger2 = false;
    private bool trigger3 = false;


    private void Start()
    {

    }

    public void Enable1()
    {
        object1.SetActive(!trigger1);
        trigger1 = !trigger1;
    }

    public void Enable2()
    {
        object2.SetActive(!trigger2);
        trigger2 = !trigger2;
    }

    public void Enable3()
    {
        object3.SetActive(!trigger3);
        trigger3 = !trigger3;
    }
}
