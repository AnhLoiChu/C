#include<stdio.h>
int main(){
int N,x;
float tong,tbc;
scanf("%d",&N);
for ( int i =0;i<N;i++){
    scanf("%d",&x);
    tong +=x*x;
    }
tbc = tong/N;
printf("Tong va tbc la %.0f va %.2f",tong,tbc);
return 0;
}
