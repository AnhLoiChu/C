#include <stdio.h>
int i = 1;
int addOne (int i)
{
i = i + 1;
return i;
}
int main(void)
{
int i = 3;
printf("%d\n", addOne(i) );
printf("%d\n", i);
return 0;
}
//ra 4 và 3 vì hàm addOne áp biến i=3 thành 4 còn i trong hàm main vẫn là 3
