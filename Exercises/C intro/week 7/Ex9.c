#include<stdio.h>
int main(){
int N;
int i,j;
scanf("%d",&N);
for (i=1;i<=N;i++){
    int sum =0;
    for (j=1;j<=i/2;j++){
        if(i%j==0){
            sum +=j;
            }
        }
    if(i==sum){
        printf("%d",i);
        }
    }
return 0;
}
