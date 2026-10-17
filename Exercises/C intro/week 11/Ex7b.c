#include<stdio.h>

void count(int n, int *nb){
    for(int i=1;i<n-1;i++){
        if(n%i==0) (*nb)++;
    }
}

int main(){
    int n;
    int count_uoc=0;

    scanf("%d",&n);
    count(n,&count_uoc);
    printf("%d",count_uoc);
    return 0;
}
