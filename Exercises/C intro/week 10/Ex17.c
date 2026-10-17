#include<stdio.h>
int main(){
    int m,n;
    int a[10][10];
    int count_zero = 0;
    int count_other = 0;

    scanf("%d %d",&n,&m);

    if(0<n &&n<=10 && 0<m&&m<=10){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&a[i][j]);
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if (a[i][j]==0) count_zero++;
                else count_other++;
            }
        }

        if(count_zero > count_other) printf("YES");
        else printf("NO");
    }
    else printf("Nhap m va n khong hop le");
    return 0;
}
