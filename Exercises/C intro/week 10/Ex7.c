#include<stdio.h>

int compare_arrays(const int arr1[], const int arr2[], int size){
    for (int i = 0;i <size; i++) {
        if (arr1[i] != arr2[i]) return 0;
    }
    return 1;
}

int main(){
    int size;
    int a[100],b[100];
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++){
        scanf("%d",&b[i]);
    }
    printf("%d",compare_arrays(a,b,size));
    return 0;
}
