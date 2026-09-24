#include<stdio.h>
#include<math.h>

int main(){
float a,b,x;
printf("Nhap 2 so a,b: ");
scanf("%f %f",&a,&b);
(a != 0)
        ? printf("PT co nghiem x = %.2f\n", -b / a)
        : (b == 0 ? printf("PT vo so nghiem\n") : printf("PT vo nghiem\n"));
return 0;
}
