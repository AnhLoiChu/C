#include<stdio.h>

float tinhTong(int n){
    float sum = 0.0;
    for(int i=1;i<=n;i++){
        sum += 1.0/i;
    }
    return sum;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%f",tinhTong(n));
    return 0;
}
