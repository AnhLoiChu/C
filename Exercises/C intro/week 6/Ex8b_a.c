#include <stdio.h>

int main() {
    float diem;
    scanf("%f", &diem);

    if (diem < 0 || diem > 10) {
        printf("Input khong hop le");
    } else if (diem >= 9.5) {
        printf("A+");
    } else if (diem >= 8.5) {
        printf("A");
    } else if (diem >= 8.0) {
        printf("B+");
    } else if (diem >= 7.0) {
        printf("B");
    } else if (diem >= 6.5) {
        printf("C+");
    } else if (diem >= 5.5) {
        printf("C");
    } else if (diem >= 5.0) {
        printf("D+");
    } else if (diem >= 4.0) {
        printf("D");
    } else {
        printf("F");
    }
    return 0;
}
