#include <stdio.h>
#include <limits.h>

int main()
{
unsigned int x = UINT_MAX - 1;
signed int y = INT_MAX - 1;
printf("x is an unsigned int, occupying %i bytes.\n\n",sizeof(x));
printf("The initial value of x is %u\n", x);
x++;
printf("Add 1; the new value of x is %u\n", x);
x++;

printf("Add 1; the new value of x is %u\n", x);
x++;
printf("Add 1; the new value of x is %u\n", x);
printf("\ny is a signed int, occupying %i bytes.\n\n", sizeof(y));
printf("The initial value of y is %i\n", y);
y++;
printf("Add 1; the new value of y is %i\n", y);
y++;
printf("Add 1; the new value of y is %i\n", y);
y++;
printf("Add 1; the new value of y is %i\n", y);
return 0;
}
//Khi đạt giá trị cực đại (UINT_MAX = 4294967295), nếu cộng thêm $1$ thì giá trị sẽ quay về 0
//Khi đạt giá trị cực đại (INT_MAX = 2147483647), nếu cộng thêm $1$ thì giá trị sẽ nhảy sang số âm nhỏ nhất (-2147483648) chứ KHÔNG về 0
