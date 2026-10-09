#include <stdio.h>
#include "giaithua.h" // Nhúng header file chứa khai báo hàm giaithua

int main() {
    int num;

    printf("Nhap so nguyen: ");
    scanf("%d", &num);

    printf("%d! = %d\n", num, giaithua(num));

    return 0;
}
