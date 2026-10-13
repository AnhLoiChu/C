#include <stdio.h>

int main(){
    int A[12];
    for(int i = 0;i<12;i++){
        scanf("%d",&A[i]);
    }
    printf("month \t rainfall (in mm) \n");
    for(int i = 0;i<12;i++){
        printf("%d \t %d\n",i,A[i]);
    }
    return 0;
}
