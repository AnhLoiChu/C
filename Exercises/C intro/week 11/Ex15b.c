#include<stdio.h>

int* findLarger(int *n1, int *n2, int *n3){
    int *max =n1;
    if (*n2>*max) max =n2;
    if (*n3>*max) max =n3;
    return max;
}

int main(){
    int a,b,c;
    int *max;
    scanf("%d %d %d",&a,&b,&c);
    max = findLarger(&a,&b,&c);
    printf("%d",*max);
}
