using UnityEngine;

public class SceneHandler : MonoBehaviour
{
    [SerializeField] GameObject object1 = null;
    [SerializeField] GameObject object2 = null;

    private bool trigger1 = false;
    private bool trigger2 = false;


    private void Start()
    {
    }

    public void Mode1()
    {
        if (!trigger1) // Off -> On
        {
            trigger1 = !trigger1;
            object1.SetActive(!trigger1);
        }
        else if (trigger1)
        {

            trigger1 = !trigger1;
            object1.SetActive(!trigger1);
        }
    }

    public void Mode2()
    {
        object2.SetActive(!trigger2);
        trigger2 = !trigger2;
    }
}
