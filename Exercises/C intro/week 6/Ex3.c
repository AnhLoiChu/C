#include<stdio.h>
int main(){
int tuoi;
scanf("%d",&tuoi);
switch(tuoi){
case 1 ... 17 : printf("Tre em"); break;
case 18 ... 64: printf("Truong thanh"); break;
case 65 ... 150: printf("Nguoi gia"); break;
default : printf("Input khong hop le");
}
return 0;
}

