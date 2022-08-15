public class RealTimeWeather
{
    public string t1h { get; set; } //temperature 'C
    public string rn1 { get; set; } //1시간 강수량 mm
    public string uuu { get; set; } //동서바람성분 m/s
    public string vvv { get; set; } //남북바람성분 m/s
    public string reh { get; set; } //습도 %
    public string pty { get; set; } //강수형태 
    public string vec { get; set; } //풍향 deg
    public string wsd { get; set; } //풍속 m/s

    public void insertValues(Items items)
    {
        if (items != null)
        {
            for (int i = 0; i < items.item.Count; i++)
            {
                string category = items.item[i].category;

                switch (category)
                {
                    #region 분류 case
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
