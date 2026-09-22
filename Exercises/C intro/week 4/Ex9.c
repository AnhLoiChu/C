#include<stdio.h>
#include<math.h>
#define PI 3.14
int main(){
float r,s,c,S,V;
printf("Nhap ban kinh r: ");
scanf("%f",&r);
s = PI*r*r;
c = PI*r*2;
S = 4*PI*r*r;
V = 4/3*PI*r*r*r;
printf("Dien tich duong tron la:%f \n",s);
printf("Chu vi duong tron la:%f \n",c);
printf("Dien tich khoi cau la:%f \n",S);
printf("The tich khoi cau la:%f \n",V);
return 0;
}
