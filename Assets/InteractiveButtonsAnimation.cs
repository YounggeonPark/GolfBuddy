using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractiveButtonsAnimation : MonoBehaviour
{
    AnimationSpawn anima = new AnimationSpawn();

    public GameObject camera_user;
    public GameObject buttons;
    
    private void OnEnable()
    {
        StartCoroutine(anima.SpawnAndRotate(buttons, camera_user, 10000));
    }

    private void Start()
    {
        StartCoroutine(anima.SpawnAndRotate(buttons, camera_user, 10000));
    }
}
