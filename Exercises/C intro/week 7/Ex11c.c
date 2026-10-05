#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);            // N = 10 -> chiều rộng 2n-1 = 19
    int w = 2 * n - 1;

    // Phần 1: 3 dòng đầu (hai búp)
    for (int i = 1; i <= 3; i++) {
        int lead  = 3 - i;
        int stars = 3 + 2 * i;              // 5, 7, 9
        int gap   = 2 * (3 - i) + 1;        // 5, 3, 1

        for (int j = 0; j < lead; j++)  printf(" ");
        for (int j = 0; j < stars; j++) printf("*");
        for (int j = 0; j < gap; j++)   printf(" ");
        for (int j = 0; j < stars; j++) printf("*");
        printf("\n");
    }

    // Phần 2: dòng chữ ở giữa
    for (int j = 0; j < 5; j++) printf("*");
    printf("DHBK-HaNoi");
    for (int j = 0; j < w - 15; j++) printf("*");   // 19 - 5 - 10 = 4
    printf("\n");

    // Phần 3: tam giác ngược
    for (int k = 0; k < w - 2 - 1 + 1 - (w - 17) ; k++) {} // (bỏ qua, xem dòng dưới)
    for (int k = 0; k <= (w - 3) / 2 + 1 && w - 2 - 2 * k >= 1; k++) {
        for (int j = 0; j < k; j++)             printf(" ");
        for (int j = 0; j < w - 2 - 2 * k; j++) printf("*");
        printf("\n");
    }
    return 0;
}
