#include<stdio.h>

int main(){
    int a[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int found =0;

    for(int i=0;i<n;i++){
        int already_count=0;
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                already_count=1;
                break;
            }
        }

        if(already_count == 0){
            int count =0;
            for(int j=0;j<n;j++){
                if(a[j]==a[i]){
                    count++;
                }
            }
            if(count > n/2){
                printf("%d",a[i]);
                found =1;
                break;
            }
        }
    }

    if(found ==0){
        printf("-1");
    }

    return 0;
}
