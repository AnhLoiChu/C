#include <stdio.h>

int main() {
    int v1, v2, v3, v4, v5, v6;
    int ngay, khu_hoi;

    scanf("%d", &v1);
    scanf("%d", &v2);
    scanf("%d", &v3);
    scanf("%d", &v4);
    scanf("%d", &v5);
    scanf("%d", &v6);
    scanf("%d", &ngay);
    scanf("%d", &khu_hoi);

    double tong_tien = v1 * 895000 + v2 * 1111000 + v3 * 1279000 + v4 * 1417000 + v5 * 1452000 + v6 * 1566000;

    if (ngay == 1) {
        tong_tien = tong_tien * 1.15;
    }

    if (khu_hoi == 1) {
        tong_tien = tong_tien * 1.8;
    }

    printf("%f", tong_tien);

    return 0;
}
