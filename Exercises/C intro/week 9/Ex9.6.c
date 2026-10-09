#include<stdio.h>

int i;
void f() {
int i = 0;
i++; // chỉ làm thay đổi giá trị biến i cục bộ
}
void g() {
i++; // làm thay đổi giá trị của biến i tổng thể
}
int main() {
    i = 10;
    f(i);
    printf("i = %d", i);
    g(i);
    printf("\n i = %d", i);
}
//ra i =10 và i=11 vì hàm f chứa i và tính toán chỉ nằm trong hàm f rồi kết thúc còn hàm g sẽ làm tăng biến toàn cục
