#include <stdio.h>

#define MAX 100

// Định nghĩa cấu trúc phân số
typedef struct {
    int numerator;   // Tử số
    int denominator; // Mẫu số
} fraction;

// Khai báo các hàm nguyên mẫu
void fractionInput(fraction *ps);
void fractionOutput(fraction ps);
void fractionArrayInput(fraction dsps[], int n);
void fractionArrayOutput(fraction dsps[], int n);
int fractionCmp(fraction ps1, fraction ps2);
fraction inverse(fraction ps);
void inverseArray(fraction dsps[], int n);

// 1. Nhập một phân số (có kiểm tra mẫu số khác 0)
void fractionInput(fraction *ps) {
    printf("  - Nhap tu so: ");
    scanf("%d", &(ps->numerator));
    do {
        printf("  - Nhap mau so (khac 0): ");
        scanf("%d", &(ps->denominator));
        if (ps->denominator == 0) {
            printf("  -> Mau so phai khac 0. Vui long nhap lai!\n");
        }
    } while (ps->denominator == 0);
}

// 2. In một phân số
void fractionOutput(fraction ps) {
    printf("%d/%d", ps.numerator, ps.denominator);
}

// 3. Nhập một mảng phân số
void fractionArrayInput(fraction dsps[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin phan so thu %d:\n", i + 1);
        fractionInput(&dsps[i]);
    }
}

// 4. In nội dung của mảng phân số
void fractionArrayOutput(fraction dsps[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Phan so thu %d: ", i + 1);
        fractionOutput(dsps[i]);
        printf("\n");
    }
}

// 5. So sánh hai phân số (trả về -1 nếu ps1 < ps2, 0 nếu bằng, 1 nếu ps1 > ps2)
int fractionCmp(fraction ps1, fraction ps2) {
    double val1 = (double)ps1.numerator / ps1.denominator;
    double val2 = (double)ps2.numerator / ps2.denominator;

    if (val1 < val2) return -1;
    else if (val1 > val2) return 1;
    else return 0;
}

// 6. Đảo ngược một phân số (đổi chỗ tử và mẫu)
fraction inverse(fraction ps) {
    fraction temp;
    temp.numerator = ps.denominator;
    temp.denominator = ps.numerator;
    return temp;
}

// 7. Đảo ngược các phân số trong mảng
void inverseArray(fraction dsps[], int n) {
    for (int i = 0; i < n; i++) {
        dsps[i] = inverse(dsps[i]);
    }
}

int main() {
    int n;
    fraction dsps[MAX];

    printf("Nhap so luong phan so (n > 0): ");
    scanf("%d", &n);

    // Nhập mảng phân số
    fractionArrayInput(dsps, n);

    // In nội dung mảng vừa nhập
    printf("\n--- DANH SACH PHAN SO VUA NHAP ---\n");
    fractionArrayOutput(dsps, n);

    // So sánh hai phân số đầu tiên (nếu mảng có từ 2 phần tử trở lên)
    if (n >= 2) {
        int cmp = fractionCmp(dsps[0], dsps[1]);
        printf("\nSo sanh phan so 1 va phan so 2:\n");
        fractionOutput(dsps[0]);
        if (cmp == -1) printf(" < ");
        else if (cmp == 1) printf(" > ");
        else printf(" = ");
        fractionOutput(dsps[1]);
        printf("\n");
    }

    // Đảo ngược các phân số trong mảng
    inverseArray(dsps, n);
    printf("\n--- DANH SACH PHAN SO SAU KHI DAO NGUOC ---\n");
    fractionArrayOutput(dsps, n);

    return 0;
}
