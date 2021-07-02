#include<stdio.h>
typedef struct Frac Frac;
struct Frac
{
    int Tuso;
    int Mauso;
};
Frac Input(int k){
    Frac fr;
    printf("Phan so %d:\n", k);
    printf("Nhap tu so: ");
    scanf("%d",&fr.Tuso);
    printf("Nhap mau so: ");
    scanf("%d",&fr.Mauso);
    return fr;
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
    int n, i;
    printf("Nhap so phan so: ");
    scanf("%d",&n);
    Frac Frac[n];
    for (i=0;i<n;i++){
        Frac[i]=Input(i+1);
    }
    for (i=0;i<n;i++){
        printf("%d/%d   ",Frac[i].Tuso,Frac[i].Mauso);
    }
    printf("\n");
    for (i=0;i<n;i++){
        Frac[i]=Inverse(Frac[i]);
    }
    printf("Day sau khi dau nguoc la: ");
    for (i=0;i<n;i++){
        printf("%d/%d   ",Frac[i].Tuso,Frac[i].Mauso);
    }
}
