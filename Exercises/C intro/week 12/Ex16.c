#include <stdio.h>
int main()
{
char *ptr = "ABCDE";
printf("%c\n", *&*&*ptr);//ptr tro toi dia chi mang(gia tri dau tien-A) va lay gia tri roi lay dia chi luan phien in ra A
return 0;
}
