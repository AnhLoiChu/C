#include<stdio.h>

int main(){
    int arr1[10], arr2[10], arr3[10];
    int count_chan=0;
    int count_le=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        if(arr1[i]%2==0){
            arr2[count_chan]=arr1[i];
            count_chan++;
        }
        else{
            arr3[count_le]=arr1[i];
            count_le++;
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    for(int i=0;i<count_chan;i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");
    for(int i=0;i<count_le;i++){
        printf("%d ",arr3[i]);
    }

    return 0;
}
