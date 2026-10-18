#include<stdio.h> //ax+b=0

int gptb1(float a, float b, float *x){
    if(a==0 && b==0) return 1;
    else if(a==0 && b!=0) return 2;
    else {
    *x=-b/a;
    return 0;
    }
}

int main(){
    int test;
    float a,b,result;

    scanf("%f %f",&a,&b);
    test=gptb1(a,b,&result);
    if(test ==0) printf("Phuong trinh co nghiem duy nhat %f",result);
    if(test ==1) printf("Phuong trinh vo so nghiem");
    if(test ==2) printf("Phuong trinh vo nghiem");
    return 0;
}
