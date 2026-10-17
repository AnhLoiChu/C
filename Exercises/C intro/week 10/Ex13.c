#include<stdio.h>

void reverse(float a[],int size){
    for(int i=size-1;i>=0;i--){
        printf("%.2f ",a[i]);
    }
}


int main (){
    int n;
    int a[100];
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%f",&a[i]);
    }
    reverse(a,n);
    return 0;
}
