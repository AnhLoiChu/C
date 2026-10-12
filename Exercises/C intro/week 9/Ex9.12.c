#include<stdio.h>

double celsious (double f){
    double c;
    c = 5.0/9.0*(f-32);
    return c;
}

int main(){
    double c =0;
    for (int i =1;i<=20;i++){
        printf("%lf\n",celsious(i));
    }
return 0;
}
