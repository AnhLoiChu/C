#include<stdio.h>
#include<math.h>
int main(){
int a = 10;
int b = 7;
float c = 15.75;
float d = 4;
int e = 8; // float e = 8.0;
float f = 5.6;
float z;
z = a/b + c*d - e*f;
printf("%f",z);
return 0;
}
//z = a/b + c*d – e%f;
//e%f sẽ bị lỗi vì % phải cả 2 là int, char,...(số nguyên) không là sẽ lỗi, ở đây có %f nên sai
