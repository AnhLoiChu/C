#include <stdio.h>

int main() {
float diem;
scanf("%f", &diem);
    if  ( diem < 0 || diem > 10) {
        printf("Input khong hop le");
    } else if (diem >= 9.0) {
        printf("Loai gioi");
    } else if (diem >= 7.0) {
        printf("Loai kha");
    } else if (diem >= 5.0) {
        printf("Loai trung binh");
    } else {
        printf("Loai kem");
    }
    return 0;
}
