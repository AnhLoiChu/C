#include<stdio.h>

int highestCommonFactor (int a, int b){
    int UCLN;

    UCLN = a;

    if(b<a) UCLN =b;
    else UCLN =a;

    for(int i = UCLN;i>0;i--){
        if( a % i ==0 && b%i==0) return i;
    }
    return 1;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("UCLN la %d",highestCommonFactor(a,b));
    return 0;
}
