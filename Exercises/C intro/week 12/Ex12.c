#include<stdio.h>
/*void reversearray(int arr[], int size){
int i, j, tmp;
i = 0; j = size -1;
while(i<j){
tmp = arr[i];
arr[i] = arr[j];
arr[j] = tmp;
i++; j--; //đảo vị trí phần tử đầu và cuối và cứ đảo theo cặp
}
}*/

void reversearray(int *arr, int size){
int i, j, tmp;
i = 0; j = size -1;
while(i<j){
tmp = *(arr+i);
*(arr+i) = *(arr+j);
*(arr+j) = tmp;
i++; j--;
}
}

int main(){
    int n;
    int x[100];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    reversearray(x,n);
    for (int i=0;i<n;i++){
        printf("%d ",x[i]);
    }
    return 0;
}
