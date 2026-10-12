#include<stdio.h>

int DigitAllSame(int n){
    if (n <= 0) return 0;
    int first_digit = n%10;
    while (n>0){
        int digit= n%10;
        if(first_digit %2== 0&& digit%2 !=0) return 0;
        if(first_digit %2!= 0&& digit%2 ==0) return 0;
        n/=10;
    }
    return 1;
}


int main(){
    int n;
    scanf("%d", &n);
    printf("%d", DigitAllSame(n));
    return 0;
}
