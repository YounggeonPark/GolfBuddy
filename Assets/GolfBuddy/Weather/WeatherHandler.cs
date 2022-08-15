using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class WeatherHandler : MonoBehaviour
{
    // ��ġ����
    [SerializeField] GPSHandler gps;
    public string code;
    public int nx = 0;
    public int ny = 0;
    public float degree;
    public float speed;

    public bool updated = false;
    private string url;

    private KakaoMapAPI kakao;
    private GovAPI gov;


    void Start()
    {

    }

    void Update()
    {
        if (!updated)
        {
            #region Kakao REST API ( GPS -> �������� ) // rest api �����ʿ�
            kakao = new KakaoMapAPI(gps.longitude, gps.latitude);

            kakao.GPS2Npos();
            if(kakao.kakao_return != null)
            {
                code=kakao.kakao_return.documents[0].code;
                long temp = Int64.Parse(code);
                code = "A"+(temp / 1000) * 1000;
            }
            #endregion

            #region  ����: �������� -> ������ǥ
            List<Dictionary<string, object>> data_excel = CSVReader.Read("gov_datasheet");

            for (int i = 0; i < data_excel.Count; i++)
            {
                if (data_excel[i]["Code"].ToString() == code)
                {
                    nx = (int)data_excel[i]["Nx"];
                    ny = (int)data_excel[i]["Ny"];

                    Debug.Log("[������ġ]�����ڵ�:" + code + ", Nx:" + nx + " ,Ny:" + ny);
                }
            }
            #endregion

            #region ����������API
            gov = new GovAPI(nx, ny);
            gov.GovREST();
            degree = gov.degree;
            speed = gov.speed;
            #endregion

            updated = true;
        }
    }


}
