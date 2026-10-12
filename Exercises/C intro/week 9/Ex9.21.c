#include<stdio.h>

int lowestCommonMultiple (int a, int b){
    int bcnn;

    bcnn = a;

    if (a<b) bcnn =b;
    else bcnn =a;

    for(int i = bcnn;i <= a*b;i++){
        if(i % a == 0 && i % b == 0) return i;
    }
    return a*b;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("BCNN la %d",lowestCommonMultiple(a,b));
    return 0;
}
