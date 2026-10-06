#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n;

    printf("Nhap x (radian): ");
    scanf("%lf", &x);

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    double S = 0;         // Tong S
    double term = 1.0;    // So hang dau tien (khi i = 0): 1

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            term = 1.0;   // So hang dau tien x^0 / 0! = 1
        } else {
            // Tinh so hang tiep theo tu so hang truoc do:
            // nhan voi (-x^2) va chia cho ((2i-1) * 2i)
            term = -term * (x * x) / ((2 * i - 1) * (2 * i));
        }
        S += term; // Cong so hang vao tong S
    }

    // In ket qua tinh duoc tu chuoi
    printf("\nKet qua tinh theo chuoi S: %.6lf\n", S);

    // Tinh theo ham cos(x) trong thu vien math.h
    double cos_val = cos(x);
    printf("Ket qua tinh theo ham cos(x): %.6lf\n", cos_val);

    // So sanh do chech lech
    printf("Chech lech: %.6lf\n", fabs(S - cos_val));

    return 0;
}
