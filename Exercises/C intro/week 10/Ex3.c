#include<stdio.h>

int main(){
    int A[10];
    int n;
    scanf("%d",&n);
    if (n>10) return 0;
    else{
        for(int i =0;i<n;i++){
            scanf("%d",&A[i]);
        }
        for(int i = n-1;i>=0;i--){
            printf("%d ",A[i]);
        }
    }
    return 0;
}
