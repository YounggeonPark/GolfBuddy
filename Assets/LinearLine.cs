using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LinearLine : MonoBehaviour
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


            lr.SetPosition(0, startPos);
            lr.SetPosition(1, endPos);

        }
    }
}
