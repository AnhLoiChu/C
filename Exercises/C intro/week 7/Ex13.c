#include<stdio.h>
int main(){
int N;
int sum =0;
int sohang =0;
scanf("%d",&N);
for(int i =1;i<=N;i++){
    sohang=sohang*10+9;
    sum+=sohang;
    }
printf("Tong S = %d\n",sum);
return 0;
}
