#include <stdio.h>
// finish
int main()
{
    int Year, Month, Date;
    int Leapyear, Datevalid, Februaryvalid, Month30valid, Month31valid;
    scanf("%d-%d-%d", &Year, &Month, &Date);

    Leapyear = (((Year % 100 != 0 && Year % 4 == 0) || Year % 400 == 0) == 1 ? 1 : 0); //1代表闰年，2月有29日
    Februaryvalid = (Leapyear == 0 && Month == 2 && Date < 29 && Date > 0) || (Leapyear == 1 && Month == 2 && Date < 30 && Date > 0);
    Month30valid = (Month == (4 || 6 || 9 || 11)) && (Date < 31 && Date > 0);
    Month31valid = (Month == (1 || 3 || 5 || 7 || 8 || 10 || 12)) && (Date < 32 && Date > 0);
    Datevalid = Februaryvalid || Month30valid || Month31valid;
    //printf("%d\n%d\n%d\n",Month31valid,Month==1||3||5||7||8||10||12,Month==8);//调试用
    if (Datevalid == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}