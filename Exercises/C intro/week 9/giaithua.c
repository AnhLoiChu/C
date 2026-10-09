#include "giaithua.h"

// Định nghĩa hàm giaithua
int giaithua(int a) {
    int i, gt = 1;
    for (i = 1; i <= a; i++) {
        gt = gt * i;
    }
    return gt;
}
