#include<stdio.h>

int main(){
    int a[100];
    int n,k;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    scanf("%d",&k);

    int i=n-1;
    while(i>=0 && a[i]>k){
        a[i+1]=a[i]; // Dịch chuyển các phần tử lớn hơn k sang phải
        i--;
    }
    a[i+1]=k;

    for (int i = 0; i < n+1; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
