#include <stdio.h>
int i = 1;
int addOne ()
{
i = i + 1;
return i;
}
int main()
{
printf("%d\n", addOne() );
printf("%d\n", i);
return 0;
}
//ra 2 và 2 vì giá trị đã bị thay đổi trong hàm
