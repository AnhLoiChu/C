#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n - 1; i++) {
        int k = (i <= n) ? i : 2 * n - i;   // "chiều cao" của dòng
        int stars = 2 * k - 1;              // số sao trên dòng

        for (int s = 0; s < n - k; s++)     // dấu cách đầu dòng
            printf("  ");                   // mỗi sao chiếm 2 ký tự ("* ")
        for (int j = 0; j < stars; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
