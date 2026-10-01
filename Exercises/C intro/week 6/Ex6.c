#include<stdio.h>
int main(){
char x;
int hour;
float fee;
scanf("%d",&hour);
scanf(" %c",&x);

if (hour < 0)  printf("Input khong hop le");
else if ( 0<= hour && hour <=2 ){
    switch(x){
        case 'C': fee = hour*0.7; break;
        case 'B': fee = hour*1.5; break;
        case 'T': fee = hour*2.5; break;
        default: printf("Input khong hop le");
        return 0;
    }
    printf("Phi gui xe la %f",fee);
}
else if(hour >=2){
    switch(x){
        case 'C': fee = 2*0.7 + (hour-2)*2.5; ; break;
        case 'B': fee = 2*1.5+ (hour-2)*2; break;
        case 'T': fee = 2*2.5+ (hour-2)*3.25;  break;
        default: printf("Input khong hop le");
        return 0;
    }
    printf("Phi gui xe la %f",fee);
}
return 0;
}
