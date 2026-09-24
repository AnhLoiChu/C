#include<stdio.h>
#include<math.h>

int main(){
float a,b;
printf("Nhap 2 so a,b: ");
scanf("%f %f",&a,&b);
if (a==0) {
    printf("PT khong phai PT bac 1");
}
if (a!=0){
    printf("PT ax + b co nghiem la %f",-b/a);
}
return 0;
}
