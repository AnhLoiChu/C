#include<stdio.h>

int calc_sum(int arr[], int size) {
    int i = 0;
    int sum = 0;
    for (i = 0; i < size; ++i)
    sum += arr[i];
    return sum;
}

int main(){
    int A[100];
    int size;
    scanf("%d",&size);
    for(int i=0;i<size;++i){
        scanf("%d",&A[i]);
    }
    printf("%d",calc_sum(A,size));
    return 0;
}

