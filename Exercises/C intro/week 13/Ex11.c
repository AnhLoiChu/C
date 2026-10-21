#include <stdio.h>
void swap (char *x,char *y)
{
    char *t = x;
    x = y;
    y = t;
}

int main()
{
    char *x = "ABC";
    char *y = "DEF";
    char *t;
    swap(x, y);//truyền &x,&y mới đổi, truyền tham số thì biến toàn cục không đổi
    printf("(%s, %s)", x, y);//x=abc,y=def
    t = x;//&t=&x nên t=ABC
    x = y;//&x=&y, x=def
    y = t;//y=abc
    printf("\n(%s, %s)", x, y);//x=def,y=abc
    return 0;
}
