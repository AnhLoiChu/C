#include <stdio.h>
#include <math.h>

// Khai báo hằng số PI nếu máy không hỗ trợ M_PI
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Hàm tính giá trị phân phối Gauss f(x)
double gauss(double x, double mu, double sigma) {
    double exponent = -0.5 * pow((x - mu) / sigma, 2);
    double factor = 1.0 / (sigma * sqrt(2 * M_PI));
    return factor * exp(exponent);
}

int main() {
    double mu, sigma;

    printf("Nhap mu va sigma: ");
    if (scanf("%lf %lf", &mu, &sigma) != 2 || sigma <= 0) {
        printf("Loi: sigma phai lon hon 0!\n");
        return 1;
    }

    // Tính x1 và x2
    double x1 = mu + sigma;
    double x2 = mu + 2 * sigma;

    // Tính f(x1) và f(x2)
    double f1 = gauss(x1, mu, sigma);
    double f2 = gauss(x2, mu, sigma);
    double tong = f1 + f2;

    // In kết quả
    printf("\n--- Ket qua ---\n");
    printf("f(x1) = f(mu + sigma)   = %.6lf\n", f1);
    printf("f(x2) = f(mu + 2*sigma) = %.6lf\n", f2);
    printf("Tong f(x1) + f(x2)      = %.6lf\n", tong);

    return 0;
}
