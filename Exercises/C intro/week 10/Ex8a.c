#include<stdio.h>

void DesSort (int a[], int n){
    int tmp;
    for(int i =0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                tmp = a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
}

int main(){
    int size;
    int a[10];
    scanf("%d",&size);
    if(size <=0 || size > 10) return 0;
    else{
        for(int i=0;i<size;i++){
            scanf("%d",&a[i]);
        }
        DesSort(a,size);
        for(int i=0;i<size;i++){
            printf("%d ",a[i]);
        }
    }
    return 0;
}
