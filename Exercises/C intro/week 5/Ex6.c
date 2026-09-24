#include<stdio.h>
#include<math.h>
int main()
{
int a = 5, b = 6, c = 7;
puts("int a = 5, b = 6, c = 7;\n");
printf("The value of  a > b  is \t%i\n\n", a > b);
printf("The value of  b < c  is \t%i\n\n", b < c);
printf("The value of  a + b >= c  is    \t%i\n\n", a + b >= c);
printf("The value of  a - b <= b-c is\t%i\n\n", a - b <= b - c);
printf("The value of  a = b-c  is\t%i\n\n", a=b-c);
printf("The value of  a * b != c * c  is\t%i\n\n", a * b < c * c);
return 0;
}
//Thay thế b - a == b – c bởi a = b-c
//phép = là gán giá trị a chứ không phải == là phép so sánh, sai ra 0, đúng ra 1
