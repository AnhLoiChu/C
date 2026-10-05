#include<stdio.h>
int main(){
int x = 2;
int y = 10 ;
for ( int j = x; j <= x * y; j += y / x ){
    printf("j = %d y = %d\n", j, y);
    y = y + 2;
    }
return 0;
}
//j=2;j<=2*y;j=j + y/x mà y tăng
//j=2,y=10   j=8,y=12    j=15,y=14         j =23,y=16     j=32,y=18
//   j=42,y=20 không được vì 42>20*2
