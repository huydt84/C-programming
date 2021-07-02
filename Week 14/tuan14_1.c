#include<stdio.h>
typedef struct Date Date;
struct Date
{
    int Day;
    int Month;
    int Year;
};
Date Input(){
    Date date;
    do{
        printf("Nhap ngay di ban: ");
        scanf("%d",&date.Day);
    }
    while(date.Day<1 || date.Day>31);
    do{
        printf("Nhap thang di ban: ");
        scanf("%d",&date.Month);
    }
    while(date.Month<1||date.Month>12);
    printf("Nhap nam di ban: ");
    scanf("%d",&date.Year);
    printf("Ngay ma ban vua nhap la: %d/%d/%d\n",date.Day,date.Month,date.Year);
    return date;
}
int datecmp(Date date1,Date date2){
    if(date1.Year>date2.Year){
        return 1;
    }else if (date1.Year<date2.Year){
        return -1;
    }else{
        int ngaydate1 = date1.Day+31*date1.Month;
        int ngaydate2 = date2.Day+31*date2.Month;
        if (ngaydate1>ngaydate2){
            return 1;
        }else if (ngaydate1<ngaydate2){
            return -1;
        }else return 0;
    }
}
int main(){
    Date date1;
    date1 = Input();
    Date date2;
    date2 = Input();
    switch (datecmp(date1,date2))
    {
    case 1:
        printf("Ngay thu nhat lon hon roi\n");
        break;
    case 0:
        printf("Hai ngay trung nhau roi\n");
        break;
    case -1:
        printf("Ngay thu hai lon hon roi\n");
        break;
    default:
        break;
    }
}