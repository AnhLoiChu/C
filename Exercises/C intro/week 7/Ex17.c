#include <stdio.h>

int main() {
    int N;
    printf("Nhap so hang (Number of rows): ");
    scanf("%d", &N);

    // Vong lap n duyet qua tung dong (tu 0 den N - 1)
    for (int n = 0; n < N; n++) {

        // 1. In khoang trang de can giua tam giac
        for (int space = 0; space < N - 1 - n; space++) {
            printf(" ");
        }

        // 2. Tinh va in cac phan tu tren dong n
        int val = 1; // Phan tu dau tien (k = 0) luon bang 1
        for (int k = 0; k <= n; k++) {
            printf("%d ", val);

            // Cong thuc tinh phan tu tiep theo theo goii y slide:
            val = val * (n - k) / (k + 1);
        }

        printf("\n");
    }

    return 0;
}'
