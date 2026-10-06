#include <stdio.h>

int main() {
    int N;
    printf("Nhap so hang N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
//cộng vị trí, nếu i+j chẵn thì in 1
