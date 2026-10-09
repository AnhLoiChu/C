#include <stdio.h>
int i = 1;
int addOne ()
{
i = i + 1;
return i;
}
int main()
{
int i = 3;
printf("%d\n", addOne() );
printf("%d\n", i);
return 0;
}
//ra 2 và 3 vì biến trong hàm addOne đã thành 2 còn i =3 là lúc sau khai báo lại trong hàm main
