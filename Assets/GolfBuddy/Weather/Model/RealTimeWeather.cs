public class RealTimeWeather
{
    public string t1h { get; set; } //temperature 'C
    public string rn1 { get; set; } //1�ð� ������ mm
    public string uuu { get; set; } //�����ٶ����� m/s
    public string vvv { get; set; } //���Ϲٶ����� m/s
    public string reh { get; set; } //���� %
    public string pty { get; set; } //�������� 
    public string vec { get; set; } //ǳ�� deg
    public string wsd { get; set; } //ǳ�� m/s

    public void insertValues(Items items)
    {
        if (items != null)
        {
            for (int i = 0; i < items.item.Count; i++)
            {
                string category = items.item[i].category;

                switch (category)
                {
                    #region �з� case
                    case "T1H":
                        t1h = items.item[i].obsrValue;
                        break;
                    case "RN1":
                        rn1 = items.item[i].obsrValue;
                        break;
                    case "UUU":
                        uuu = items.item[i].obsrValue;
                        break;
                    case "VVV":
                        vvv = items.item[i].obsrValue;
                        break;
                    case "REH":
                        reh = items.item[i].obsrValue;
                        break;
                    case "PTY":
                        pty = items.item[i].obsrValue;
                        break;
                    case "VEC":
                        vec = items.item[i].obsrValue;
                        break;
                    case "WSD":
                        wsd = items.item[i].obsrValue;
                        break;
                    default:
                        break;
                        #endregion
                }
            }
        }
    }
}
