#include <stdio.h>
int main() {
int x[4];
int i;

for(i = 0; i < 4; ++i) {
printf("&x[%d] = %p\n", i, &x[i]);//in ra địa chỉ của x[i] và tăng dần 4 bytes
}
printf("Address of array x: %p", x); // địa chỉ của mảng chính là địa chỉ của phần tử đầu tiên x[0]
return 0;
}
