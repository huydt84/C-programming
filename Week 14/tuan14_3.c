#include<stdio.h>
typedef struct Student Student;
struct Student
{
    char id[6];
    char name[30];
    float grade;
    char classement;
};
Student Input(int k){
    Student std;
    printf("Nhap ID hoc sinh %d: ", k);
    scanf("%s",std.id);
    printf("Nhap ten hoc sinh %d: ", k);
    getchar();
    scanf("%[^\n]",std.name);
    printf("Nhap diem cua hoc sinh %d: ", k);
    scanf("%f",&std.grade);
    if(std.grade<6.5){
        std.classement = 68;
    }else if(std.grade>=6.5&&std.grade<8.0){
        std.classement = 67;
    }else if(std.grade<=8.0&&std.grade<=9.0){
        std.classement = 66;
    }else if(std.grade<9.0&&std.grade<=10.0){
        std.classement = 65;
    }
    return std;
}
int main(){
    int n, i;
    printf("Nhao so hoc sinh di: ");
    scanf("%d",&n);
    Student student[n];
    for(i=0;i<n;i++){
        student[i] = Input(i+1);
    }
    for (i=0;i<n;i++){
        printf("%.30s        %.2f        %c\n",student[i].name,student[i].grade,student[i].classement);
    }
}
