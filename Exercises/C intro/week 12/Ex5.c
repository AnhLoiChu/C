#include <stdio.h>

int addNumbers(int *fiveNumbers){
    int i, sum=0;
    for(i=0; i<5; i++, fiveNumbers++){
    sum+= *fiveNumbers;
    }
    return sum;
}

int main(){
    int x[5];
    int sum =0;

    for(int i=0;i<5;i++ ){
        scanf("%d",&x[i]);
    }
    sum=addNumbers(x);
    printf("%d",sum);
    return 0;

}
