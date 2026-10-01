#include<stdio.h>
int main(){
int tuoi;
scanf("%d",&tuoi);
if(0< tuoi && tuoi< 18) printf("Tre em");
else if(18<= tuoi && tuoi< 65) printf("Truong thanh");
else if(tuoi >=65) printf("Nguoi gia");
else printf("Input khong hop le");
return 0;
}
