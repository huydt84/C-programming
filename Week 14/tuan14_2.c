#include<stdio.h>
typedef struct weatherdata weather;
struct weatherdata
{
    int ToTal;
    int HighTemp;
    int LowTemp;
    int AvgTemp;
};
int TotalRain=0;
int Highh=-40;
int Loww=50;
weather Input(int k){
    weather wthr;
    printf("Thang %d:\nNhap luong mua di: ", k);
    scanf("%d",&wthr.ToTal);
    do{
        printf("Nhap nhiet do max di ban: ");
        scanf("%d",&wthr.HighTemp);
    }
    while(wthr.HighTemp<-40||wthr.HighTemp>50);
    do{
        printf("Nhap nhiet do min di ban: ");
        scanf("%d",&wthr.LowTemp);
    }
    while(wthr.LowTemp<-40||wthr.LowTemp>50);
    do{
        printf("Nhap nhiet TB di ban: ");
        scanf("%d",&wthr.AvgTemp);
    }
    while(wthr.AvgTemp<-40||wthr.AvgTemp>50);
    TotalRain+= wthr.ToTal;
    if (Loww>wthr.LowTemp){
        Loww=wthr.LowTemp;
    }
    if (Highh<wthr.HighTemp){
        Highh=wthr.HighTemp;
    }
    return wthr;
}
int main(){
    weather Month;
    int i;
    for (i=1;i<=12;i++){
        Month=Input(i+1);
    }
    printf("Tong luong mua ca nam la: %d",TotalRain);
    printf("Nhiet do lon nhat ca nam la:%d",Highh);
    printf("Nhiet do thap nhat ca nam la:%d",Loww);
    printf("Luong mua trung binh ca nam la:%.2f",TotalRain/12.0);
}
