using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Parabola : MonoBehaviour
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

            // 포지션이 위로 그려지도록 중앙값 아래로 내리기
            center.y -= 0.5f;   // center.y -= 3;

            // 시작지점, 끝지점을 내려간 중앙값을 기준으로 수정
            startPos = startPos - center;
            endPos = endPos - center;

            // 라인렌더러가 갖는 포지션 개수만큼 반복
            for (int i = 0; i < lr.positionCount; i++)
            {
                // 시작지점에서 끝지점까지 구형보간한 위치를 포지션 번호만큼 나누어 할당
                Vector3 point = Vector3.Slerp(startPos, endPos, i / (float)(lr.positionCount - 1));

                // 포물선을 위로 그리기 위해 center를 빼줬으므로 다시 더해서 원상복구
                point += center;

                // 각 위치값을 라인 렌더러에 설정
                lr.SetPosition(i, point);
            }
        }
    }
}
