#include<stdio.h>

int countEven(int* arr, int size){//đếm số chẵn
int i;
int count =0;
for (i=0; i<size; i++)
if (*(arr+i) % 2 == 0) count++;
return count;
}

int main(){
    int x[100];
    int n;
    int s=0;
    scanf("%d",&n);
    if(n<0) return 0;
    if(n>=0){
        for(int i=0;i<n;i++){
            scanf("%d",&x[i]);
        }

        s = countEven(x,n);
        printf("%d",s);
    }
    return 0;
}
