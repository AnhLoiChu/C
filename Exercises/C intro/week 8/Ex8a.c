#include<stdio.h>

int main(){

float diem,trungbinh;
float tongdiem = 0;
int sodiem=0;

scanf("%f",&diem);
while(diem >=0){
    tongdiem+= diem;
    sodiem++;
    scanf("%f",&diem);
    }
while(sodiem > 0){
    trungbinh = tongdiem/sodiem;
    printf("%f",trungbinh);
    break;
    }
return 0;
}
