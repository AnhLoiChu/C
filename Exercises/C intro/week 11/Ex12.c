#include<stdio.h>

int f(int x, int *py, int **ppz) { //truyền x=4,*py=b,**ppz=a
    int y, z;
    **ppz += 1; // a lên 5,tăng c từ 4 lên 5 thông qua b cũng lên 5
    z  = **ppz; //z=5
    *py += 2; //b=5+2=7
    y = *py; //y=7
    x += 3; //x=4+3=7
    return x + y + z;//7+7+5=19
}

int main() {
    int c, *b, **a;
    c = 4;
    b = &c;//*b=4
    a = &b;//**a=4
    printf("%d ", f(c, b, a));//c không thay đổi vì c bị thay đổi là trong hàm f chứ không phải main, việc truyền địa chỉ mới thay đổi giá trị
    return 0;
}
