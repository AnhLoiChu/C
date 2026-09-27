#include <stdio.h>

int main() {
    int n, m, k, max;
    char name;
    printf("Nhap 3 so nguyen n, m, k: ");
    scanf("%d %d %d", &n, &m, &k);

    max = n;
    name = 'n';

    if (m > max) {
        max = m;
        name = 'm';
    }
    if (k > max) {
        max = k;
        name = 'k';
    }

    printf("So nguyen lon nhat: so nguyen %c voi gia tri %d\n", name, max);

    return 0;
}
