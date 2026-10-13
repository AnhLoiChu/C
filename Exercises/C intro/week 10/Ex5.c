#include<stdio.h>

int main(){
    int A[100];
    int n;
    int sum=0;
    int count = 0;
    scanf("%d",&n);
    if(n<=0) return 0;
    else{
        for(int i=0;i<n;i++){
            scanf("%d",&A[i]);
        }
        for(int i=1;i<n-1;i++){
            if(A[i]> A[i-1] && A[i] > A[i+1]) {
                sum+=A[i];
                count++;
            }
        }
    if(count > 0) printf("%d",sum);
    else printf("Khong co so cuc tri");
    }
    return 0;
}
