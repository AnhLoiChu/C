#include<stdio.h>
int main(){
int N;
int sum =0;
int sohang9 =0;
int sohang1=0;
scanf("%d",&N);
for(int i =1;i<=N;i++){
    sohang9=sohang9*10+9;
    sohang1=sohang9/9;
    sum+=sohang1;
    }
printf("Tong S = %d\n",sum);
return 0;
}
