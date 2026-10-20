#include<stdio.h>
void f(int *p, int *q) {
    p = q; //p cũng trỏ vào j vì p,q chứa địa chỉ
    *p = 2;//đổi j=2
}
int i = 0, j = 1;
int main() {
    f(&i, &j); //i giữ nguyên 0 vì địa chỉ p đã trỏ vào j rồi thay đổi j
    printf("%d %d\n", i, j);
    return 0;
}
