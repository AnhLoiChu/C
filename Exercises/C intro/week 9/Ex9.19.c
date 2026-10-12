#include <stdio.h>

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }

        for (int j = i - 1; j >= 1; j--) {
            printf("%c ", 'A' + j - 1);
        }

        printf("\n");
    }
}

int main() {
    int n;
    printf("Nhap so dong n: ");
    scanf("%d", &n);

    printPyramid(n);
    return 0;
}
