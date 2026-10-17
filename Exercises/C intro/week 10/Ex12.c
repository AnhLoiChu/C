#include<stdio.h>

int main(){
    int n;
    int a[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int doixung =1; //gia su ban dau mang doi xung
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1]){
            doixung=1;
            break;
        }
    }
    if(doixung==1) printf("mang doi xung");
    else printf("khong doi xung");
    return 0;
}
