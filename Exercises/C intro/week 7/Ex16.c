#include <stdio.h>

int main() {
    int N;
    printf("Nhap N (so chu so): ");
    scanf("%d", &N);

    // 1. Tinh start (so nhỏ nhat co N chu so) và end (so lon nhat co N chu so)
    int start = 1;
    for (int k = 1; k < N; k++) {
        start *= 10; // Vi du N=3 -> start = 100
    }
    int end = start * 10 - 1; // Vi du N=3 -> end = 999

    // Neu N = 1 thi xet tu 1 den 9
    if (N == 1) {
        start = 1;
        end = 9;
    }

    printf("Cac so Armstrong co %d chu so la:\n", N);

    // 2. Duyet qua tung so trong pham vi
    for (int i = start; i <= end; i++) {
        int temp = i;
        int sum = 0;

        while (temp > 0) {
            int digit = temp % 10; // Lay chu so cuoi

            // Tinh digit^N bang vong lap tu viet
            int luyThua = 1;
            for (int k = 1; k <= N; k++) {
                luyThua *= digit;
            }

            sum += luyThua; // Cong vao tong
            temp /= 10;     // Bo chu so cuoi
        }

        // Kiem tra điieu kien Armstrong
        if (sum == i) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
