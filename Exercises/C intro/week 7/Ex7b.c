#include <stdio.h>
#include <math.h>

int main() {
    int i, j;

    printf("%d\n", 2);

    for (i = 3; i <= 100; i = i + 2) {

        int is_prime = 1;

        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}
