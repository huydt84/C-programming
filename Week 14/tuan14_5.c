#include<stdio.h>
typedef struct Frac Frac;
struct Frac
{
    int Tuso;
    int Mauso;
};
Frac Input(){
    Frac fr;
    printf("Nhap tu so: ");
    scanf("%d",&fr.Tuso);
    printf("Nhap mau so: ");
    scanf("%d",&fr.Mauso);
    return fr;
}
Frac Rutgon(Frac frac){
    int a = frac.Tuso;
    int b = frac.Mauso;
    while (a != b){
        if (a > b){
            a -= b; 
        }else{
            b -= a;
        }
    }
    frac.Tuso/=a;
    frac.Mauso/=a;
    return frac;
}
Frac Mul(Frac frac1,Frac frac2){
    Frac Tich;
    Tich.Tuso=frac1.Tuso*frac2.Tuso;
    Tich.Mauso=frac1.Mauso*frac2.Mauso;
    return Rutgon(Tich);
}
Frac Add(Frac frac1,Frac frac2){ 
    Frac Tong;
    Tong.Tuso=frac1.Tuso*frac2.Mauso + frac2.Tuso*frac1.Mauso;
    Tong.Mauso=frac1.Mauso*frac2.Mauso;
    return Rutgon(Tong);
}
Frac Inverse(Frac frac){
    int i;
    i = frac.Mauso ;
    frac.Mauso = frac.Tuso;
    frac.Tuso = i;
    return frac;
}
int fraccmp(Frac frac1,Frac frac2){
    int n = frac1.Tuso*frac2.Mauso - frac2.Tuso*frac1.Mauso ;
    if (n>0){
        printf("Phan so 1 lon hon\n");
    }else if(n<0){
        printf("Phan so 2 lon hon\n");
    }else{
        printf("Hai phan so bang nhau\n");
    }
}
int main(){
    Frac Frac1=Rutgon(Input());
    Frac Frac2=Rutgon(Input());
    Frac Tong=Add(Frac1,Frac2);
    Frac Tich=Mul(Frac1,Frac2);
    printf("Tong hai phan so la: %d/%d\n",Tong.Tuso,Tong.Mauso);
    printf("Tich hai phan so la: %d/%d\n",Tich.Tuso,Tich.Mauso);
    
}