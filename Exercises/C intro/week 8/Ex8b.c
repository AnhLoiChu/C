#include<stdio.h>

int main(){

float diem,trungbinh;
float tongdiem = 0;
int sodiem=0;

scanf("%f",&diem);
do{
tongdiem+= diem;
    sodiem++;
    scanf("%f",&diem);
    }while(diem >=0);

do{
    trungbinh = tongdiem/sodiem;
    printf("%f",trungbinh);
    break;
    }while(sodiem > 0);
return 0;
}
