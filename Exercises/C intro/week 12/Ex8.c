#include<stdio.h>

long long totalSales(long long *array){
    long long sum =0;
    for(int i =0;i<4;i++){
        sum+=*(array+i);
    }
    return sum;
}

void getSales(long long *array){
    for(int i=0;i<4;i++){
        scanf("%lld",array+i);
    }
}

int main(){
    long long x[4];
    long long total=0;
    getSales(x);
    total=totalSales(x);
    printf("%lld",total);
    return 0;
}
