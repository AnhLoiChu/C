#include <stdio.h>
int addOne ( int i )
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
//Ra 4 và 3 vì chạy hàm addone được 4 và i =3 ở sau vì biến i ở ngoài
