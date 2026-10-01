#include<stdio.h>
int main(){
float diem;
int d;
scanf("%f",&diem);
d = diem * 10;
switch(d){
    case 0 ... 39 : printf("F"); break;
    case 40 ... 49: printf("D"); break;
    case 50 ... 54: printf("D+"); break;
    case 55 ... 64: printf("C"); break;
    case 65 ... 69: printf("C+"); break;
    case 70 ... 79: printf("B"); break;
    case 80 ... 84: printf("B+"); break;
    case 85 ... 94: printf("A"); break;
    case 95 ... 100: printf("A+"); break;
    default : printf("Input khong hop le");break;
    }
return 0;
}

