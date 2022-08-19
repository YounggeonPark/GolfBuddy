using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Parabola : MonoBehaviour
{
    // ���������� ���������� ����� ���Ǿ�
    public Transform s1, s2;
    public bool render = false;
    public float lineWidth = 0.002f;

    [SerializeField] bool clicked;

    // ���������� �������� ��Ƶ� �ӽú���
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
            // ��������, �������� �ӽú����� �־ ���
            startPos = s1.position;
            endPos = s2.position;

            // �� ������ �߾Ӱ��� ���ؼ� ����
            Vector3 center = (startPos + endPos) * 0.5f;

            // �������� ���� �׷������� �߾Ӱ� �Ʒ��� ������
            center.y -= 0.5f;   // center.y -= 3;

            // ��������, �������� ������ �߾Ӱ��� �������� ����
            startPos = startPos - center;
            endPos = endPos - center;

            // ���η������� ���� ������ ������ŭ �ݺ�
            for (int i = 0; i < lr.positionCount; i++)
            {
                // ������������ ���������� ���������� ��ġ�� ������ ��ȣ��ŭ ������ �Ҵ�
                Vector3 point = Vector3.Slerp(startPos, endPos, i / (float)(lr.positionCount - 1));

                // �������� ���� �׸��� ���� center�� �������Ƿ� �ٽ� ���ؼ� ���󺹱�
                point += center;

                // �� ��ġ���� ���� �������� ����
                lr.SetPosition(i, point);
            }
        }
    }
}
