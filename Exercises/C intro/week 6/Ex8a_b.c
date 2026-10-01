#include <stdio.h>

int main() {
    int diem;

    scanf("%d", &diem);

    switch (diem) {
        case 9:
        case 10:
            printf("Loai gioi");
            break;
        case 7:
        case 8:
            printf("Loai kha");
            break;
        case 5:
        case 6:
            printf("Loai trung binh");
            break;
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            printf("Loai kem");
            break;
        default:
            printf("Input khong hop le");
            break;
    }

    return 0;
}
