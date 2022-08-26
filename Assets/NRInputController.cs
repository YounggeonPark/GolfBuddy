using NRKernal;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NRInputController : MonoBehaviour
{
    public bool hand_state;

    private void Start()
    {
        ChangeControllerType();
    }

    private void Update()
    {

    }

    public void ChangeControllerType()
    {
        if (hand_state)
        {
            NRInput.SetInputSource(InputSourceEnum.Hands);
        }
        else
        {
            NRInput.SetInputSource(InputSourceEnum.Controller);
        }
    }
}
