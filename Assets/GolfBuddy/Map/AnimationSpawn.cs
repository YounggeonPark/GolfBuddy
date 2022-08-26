using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class AnimationSpawn
{



    private const float DURATION = 1f;
    public IEnumerator SpawnAndRotate(GameObject spawned, GameObject anchor, int speed)
    {
        spawned.SetActive(true);
        Vector3 startPOS = anchor.transform.position + new Vector3(0,-1f,0);
        Vector3 endPOS = anchor.transform.position + new Vector3(0, -0.5f, 0);

        Vector3 startRot = new Vector3(0, 0, 0);
        Vector3 endRot = new Vector3(45, 0, 0);
        

        float elapsedTime = 0;
        float progress = 0;
        while(progress <= 1)
        {
            spawned.transform.position = Vector3.Lerp(startPOS, endPOS, progress);
            spawned.transform.GetChild(0).localRotation  = Quaternion.Euler(Vector3.Lerp(startRot, endRot, progress));

            elapsedTime += Time.unscaledDeltaTime;
            progress = elapsedTime / DURATION;
            yield return null;
        }
        spawned.transform.position = endPOS;
    }
}
