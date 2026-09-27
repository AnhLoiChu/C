#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
double x,y;
int n;
scanf("%lf %lf %d",&x,&y,&n);
double phan1 = sqrt(pow(x, 5) + exp(log(fabs(y)) + 1));
    double phan2 = (1 + sin(x)) / (cos(n * x) + sqrt(2 + abs(n)));

    double T = phan1 + phan2;

    printf("Gia tri bieu thuc T = %lf\n", T);

    return 0;
}
