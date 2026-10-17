#include<stdio.h>

int main(){
    int a[11][11];
    int m,n;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            a[i][j]=i*j;
        }
    }

    scanf("%d %d",&m,&n);
    if(m>=1&&m<=10 &&n>=1&&n<=10){
        printf("gia tri %d * %d la %d",m,n,a[m][n]);
    }
    else return 0;
    return 0;
}
