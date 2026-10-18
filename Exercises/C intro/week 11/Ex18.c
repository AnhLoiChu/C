#include<stdio.h>
#include<math.h>

//ax^2+bx+c=0

int gptb2(float a, float b, float c, float *x1, float *x2){
    if(a==0) return 3;

    if(a!=0){
        float delta;
        delta = b*b-4*a*c;
        if(delta ==0){
            *x1=*x2=-b/(2*a);
            return 0;
        }
        if(delta > 0 ){
            *x1=(-b-sqrt(delta))/(2*a);
            *x2=(-b+sqrt(delta))/(2*a);
            return 1;
        }
        if(delta < 0){
            return 2;
        }
    }

}

int main(){
    float a,b,c,nghiem1,nghiem2;
    int test;

    scanf("%f %f %f",&a,&b,&c);
    test = gptb2(a,b,c,&nghiem1,&nghiem2);
    if(test ==0) printf("PT co nghiem duy nhat %f",nghiem1);
    if(test ==1) printf("PT co 2 nghiem %f va %f",nghiem1,nghiem2);
    if(test ==2) printf("PT vo nghiem ");
    if(test ==3){
        if(b==0 && c==0) printf("PT vo so nghiem ");
        else if(b==0 && c!=0) printf("PT vo nghiem");
        else printf("PT co nghiem duy nhat %f",-c/b);
    }
    return 0;
}
