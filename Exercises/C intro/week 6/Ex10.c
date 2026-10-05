#include<stdio.h>
#include<math.h>

int main(){
double a,b,c,x1,x2;
double delta;
scanf("%lf %lf %lf",&a,&b,&c);

if ( a == 0 ) {
    if(b==0){
        if(c==0) printf("PT vo so nghiem");
        else printf("PT vo nghiem");
    }
    else printf("PT co 1 nghiem x = %lf",-c/b);
}
else {
delta = b*b-4*a*c;
    if (delta == 0) {
        x1=x2=-b/(2*a);
        printf("phuong trinh co nghiem kep x1 = x2 = %lf",x1);
        }
    else if ( delta < 0){
        printf("phuong trinh vo nghiem");
        }
    else {
        x1 = (-b-sqrt(delta))/(2*a);
        x2 = (-b+sqrt(delta))/(2*a);
        printf("Phuong trinh co 2 nghiem phan biet la %lf va %lf",x1,x2);
        }
}
return 0;
}
