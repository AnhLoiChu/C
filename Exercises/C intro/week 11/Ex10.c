#include <stdio.h>
int main()
{
   int a;
   char *x;
   x = (char *) &a; //ép địa chỉ của a từ int thành char, x coi vùng nhớ 4 bytes của a như 1 mảng 4 phần tử
   a = 512;//4 bytes là 0200
   x[0] = 1;
   x[1] = 2;//2 dòng lệnh đổi thành 1200(tính bytes là 1+2*256+0*256^2+0*256^3 ra 513)
   printf("%d\n", a);//in ra 513
   return 0;
}
