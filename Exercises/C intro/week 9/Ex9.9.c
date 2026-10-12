#include<stdio.h>

long sumcube(int n){
    long sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i * i * i;
    }
    return sum;
}

void printsubmultiples(int n){
    for(int i =1;i<=n;i++){
        if(n%i==0) printf("%d ",i);
    }
    printf("\n");
}

void printsquares(int n){
    for(int i=1;i<=n;i++){
        printf("%d",i*i);
    }
    printf("\n");
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%ld\n",sumcube(n));
    printsubmultiples(n);
    printsquares(n);
    return 0;
}
