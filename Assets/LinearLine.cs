using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LinearLine : MonoBehaviour
{
    // 시작지점과 끝지점으로 사용할 스피어
    public Transform s1, s2;
    public bool render = false;
    public float lineWidth = 0.002f;

    [SerializeField] bool clicked;

    // 시작지점과 끝지점을 담아둘 임시변수
    Vector3 startPos, endPos;

    LineRenderer lr;

    void Start()
    {
        lr = GetComponent<LineRenderer>();
        lr.startWidth = lineWidth;
        lr.endWidth = lineWidth;
    }

    void Update()
    {
        if (render)
        {
            // 시작지점, 끝지점을 임시변수에 넣어서 사용
            startPos = s1.position;
            endPos = s2.position;

            // 두 지점의 중앙값을 구해서 저장
            Vector3 center = (startPos + endPos) * 0.5f;


            lr.SetPosition(0, startPos);
            lr.SetPosition(1, endPos);

        }
    }
}
