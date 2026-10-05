#include<stdio.h>
#include<math.h>

int main(){
float a,b,c,d,e,f,D,Dx,Dy;
float x,y;
scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
D = a*e - b*d;
Dx=c*e-b*f;
Dy=a*f-c*d;
if( D != 0){
    x = Dx/D;
    y = Dy/D;
    printf("Co nghiem la x = %f va y = %f",x,y);
}
else {
    if(Dx!= 0 || Dy!=0) printf("PT vo nghiem");
    else printf("PT vo so nghiem");
    }
return 0;
}
