using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;

public class WeatherHandler : MonoBehaviour
{
    // ��ġ����
    [SerializeField] GPSHandler gps;
    [SerializeField] Text weather_detail;
    public int nx = 0;
    public int ny = 0;
    public float degree;
    public string direction;
    public float speed;
    private string code;

    private Text noticeText;

    // trigger
    public bool update = true;

    // API
    private KakaoMapAPI kakao;
    private GovAPI gov;


    void Start()
    {
        noticeText = GameObject.FindGameObjectWithTag("NoticeText").GetComponent<Text>();
    }

    void Update()
    {

        if (update)
        {
            #region Kakao REST API ( GPS -> �������� ) // rest api �����ʿ�
            kakao = new KakaoMapAPI(gps.longitude, gps.latitude);

            kakao.GPS2Npos();
            if(kakao.kakao_return != null && kakao.kakao_return.documents != null && kakao.kakao_return.documents.Count > 0)
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

                    //Debug.Log("[������ġ]�����ڵ�:" + code + ", Nx:" + nx + " ,Ny:" + ny);
                }
            }
            #endregion

            #region ����������API
            gov = new GovAPI(nx, ny);
            gov.GovREST();

            
            if(gov.degree != -1 && gov.speed != -1 && gov.rtweather !=null)
            {
                degree = gov.degree;
                speed = gov.speed;
                //  Noticeâ�� ���
                noticeText.text = "Direction:" + direction + ", Speed: " + speed;
            } else
            {
                degree = 1000;
                speed = 0;
                //  Noticeâ�� ���
                noticeText.text = "Weather Server is DOWN";
            }

            if (gov.state != null && gov.state.Equals("NORMAL_SERVICE"))
            {
                UpdateDetails();
            }

            // convert degree to Direction
            float num = ((degree + 22.5f * 0.5f) /22.5f);
            #region 16���� ��ȯ
            switch ((int)num)
            {
                case 0:
                    direction = "N";
                    break;
                case 1:
                    direction = "NNE";
                    break;
                case 2:
                    direction = "NE";
                    break;
                case 3:
                    direction = "ENE";
                    break;
                case 4:
                    direction = "E";
                    break;
                case 5:
                    direction = "ESE";
                    break;
                case 6:
                    direction = "SE";
                    break;
                case 7:
                    direction = "SSE";
                    break;
                case 8:
                    direction = "S";
                    break;
                case 9:
                    direction = "SSW";
                    break;
                case 10:
                    direction = "SW";
                    break;
                case 11:
                    direction = "WSW";
                    break;
                case 12:
                    direction = "W";
                    break;
                case 13:
                    direction = "WNW";
                    break;
                case 14:
                    direction = "NW";
                    break;
                case 15:
                    direction = "NNW";
                    break;
                case 16:
                    direction = "N";
                    break;
                default:
                    direction = "LOSS";
                    break;
            }
            #endregion



            #endregion

            update = false;
        }
    }


    private void UpdateDetails()
    {
        RealTimeWeather rt = gov.rtweather;
        weather_detail.text
            = "" +"���: "+ rt.t1h + "��"
            +"\n" + "����: "+ rt.reh + "%"
            +"\n" + "ǳ��: "+ rt.vec + "��"
            +"\n" + "ǳ��: "+ rt.wsd + " �� "
            +"\n" + "����: "+ PTY2Str(rt.pty)
            + "\n" + "1�ð� ������: "+ rt.rn1 + "mm"
            ;
    }
    //  ������ ��ȯ
    private string PTY2Str(string pty)
    {
        switch (Int16.Parse(pty))
        {
            case 0:
                return "����";
            case 1:
                return "��";
            case 2:
                return "��/��";
            case 3:
                return "��";
            case 5:
                return "�����";
            case 6:
                return "����ﴫ����";
            case 7:
                return "������";
            default:
                return "������ X";
        }

    }

    //������
    public void RefreshWeather()
    {
        update = true;
    }
}
