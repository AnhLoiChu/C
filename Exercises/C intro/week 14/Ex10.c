#include<stdio.h>
#include<string.h>

typedef struct{
    char id[8];
    char name[31];
    float grade;
    char classement;
} student;

int main(){
    student data[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",data[i].name);
        scanf("%f",&data[i].grade);
        if(9<=data[i].grade && data[i].grade<=10) data[i].classement = 'A';
        else if(8<=data[i].grade && data[i].grade<9) data[i].classement = 'B';
        else if(6.5<=data[i].grade && data[i].grade<8) data[i].classement = 'C';
        else if(0<=data[i].grade && data[i].grade<6.5) data[i].classement = 'D';
        else printf("Diem phai >=0");

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(data[j].grade>data[i].grade){
                        student temp = data[i];
                        data[i]=data[j];
                        data[j]=temp;
                }
            }
        }
    }
    printf("Name       Grade      Classement\n");
    for(int i=0;i<n;i++){
        printf("%-10s  %-14.2f %-22c\n",data[i].name,data[i].grade,data[i].classement);
    }
    return 0;
}
