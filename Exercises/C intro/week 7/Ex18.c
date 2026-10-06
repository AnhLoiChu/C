#include<stdio.h>
int main(){
int N;
scanf("%d",&N);
int f0 =0 ,f1=1,fn;
for (int i=0;i<N;i++){
    if(i==0){
        printf("0 ");
        }
    else if(i==1){
        printf("1");
        }
    else{
        fn = f0+ f1;
        printf(" %d",fn);
        f0=f1;
        f1=fn;
        }
    }
return 0;
}
