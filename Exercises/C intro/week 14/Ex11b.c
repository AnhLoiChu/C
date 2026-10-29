#include <stdio.h>

#define MAX 100

// Định nghĩa cấu trúc phân số
typedef struct {
    int numerator;   // Tử số
    int denominator; // Mẫu số
} fraction;

// Khai báo nguyên mẫu các hàm
int gcd(int a, int b);
fraction simplify(fraction ps);
void fractionInput(fraction *ps);
void fractionOutput(fraction ps);
void fractionArrayInput(fraction dsps[], int n);
void fractionArrayOutput(fraction dsps[], int n);
int fractionCmp(fraction ps1, fraction ps2);
fraction inverse(fraction ps);
void inverseArray(fraction dsps[], int n);
fraction fractionAdd(fraction ps1, fraction ps2);
fraction fractionMul(fraction ps1, fraction ps2);
void fractionSort(fraction dsps[], int n);

// Hàm tìm ước chung lớn nhất (dùng để tối giản phân số)
int gcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 1. Tối giản phân số
fraction simplify(fraction ps) {
    int g = gcd(ps.numerator, ps.denominator);
    if (g != 0) {
        ps.numerator /= g;
        ps.denominator /= g;
    }
    // Đảm bảo mẫu số luôn dương
    if (ps.denominator < 0) {
        ps.numerator = -ps.numerator;
        ps.denominator = -ps.denominator;
    }
    return ps;
}

// Nhập một phân số (có kiểm tra mẫu số khác 0)
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
    *ps = simplify(*ps); // Tối giản luôn khi nhập xong
}

// In một phân số
void fractionOutput(fraction ps) {
    ps = simplify(ps);
    if (ps.denominator == 1) {
        printf("%d", ps.numerator);
    } else {
        printf("%d/%d", ps.numerator, ps.denominator);
    }
}

// Nhập một mảng phân số
void fractionArrayInput(fraction dsps[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin phan so thu %d:\n", i + 1);
        fractionInput(&dsps[i]);
    }
}

// In nội dung của mảng phân số
void fractionArrayOutput(fraction dsps[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Phan so thu %d: ", i + 1);
        fractionOutput(dsps[i]);
        printf("\n");
    }
}

// So sánh hai phân số (trả về -1 nếu ps1 < ps2, 0 nếu bằng, 1 nếu ps1 > ps2)
int fractionCmp(fraction ps1, fraction ps2) {
    double val1 = (double)ps1.numerator / ps1.denominator;
    double val2 = (double)ps2.numerator / ps2.denominator;

    if (val1 < val2) return -1;
    else if (val1 > val2) return 1;
    else return 0;
}

// Đảo ngược một phân số
fraction inverse(fraction ps) {
    fraction temp;
    temp.numerator = ps.denominator;
    temp.denominator = ps.numerator;
    return simplify(temp);
}

// Đảo ngược các phân số trong mảng
void inverseArray(fraction dsps[], int n) {
    for (int i = 0; i < n; i++) {
        dsps[i] = inverse(dsps[i]);
    }
}

// 2. Cộng hai phân số: a/b + c/d = (a*d + c*b) / (b*d)
fraction fractionAdd(fraction ps1, fraction ps2) {
    fraction res;
    res.numerator = ps1.numerator * ps2.denominator + ps2.numerator * ps1.denominator;
    res.denominator = ps1.denominator * ps2.denominator;
    return simplify(res);
}

// Nhân hai phân số: (a/b) * (c/d) = (a*c) / (b*d)
fraction fractionMul(fraction ps1, fraction ps2) {
    fraction res;
    res.numerator = ps1.numerator * ps2.numerator;
    res.denominator = ps1.denominator * ps2.denominator;
    return simplify(res);
}

// 3. Sắp xếp mảng phân số theo giá trị tăng dần
void fractionSort(fraction dsps[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (fractionCmp(dsps[i], dsps[j]) > 0) {
                fraction temp = dsps[i];
                dsps[i] = dsps[j];
                dsps[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    fraction dsps[MAX];

    printf("Nhap so luong phan so (n > 0): ");
    scanf("%d", &n);

    // Nhập mảng phân số (tự động tối giản)
    fractionArrayInput(dsps, n);

    // In nội dung mảng vừa nhập
    printf("\n--- DANH SACH PHAN SO VUA NHAP (DA TOI GIAN) ---\n");
    fractionArrayOutput(dsps, n);

    // Thử nghiệm cộng và nhân hai phân số đầu tiên (nếu có từ 2 phân số trở lên)
    if (n >= 2) {
        printf("\n--- PHEP TINH TREN HAI PHAN SO DAU TIEN ---\n");
        printf("Phan so 1: "); fractionOutput(dsps[0]); printf(" | Phan so 2: "); fractionOutput(dsps[1]); printf("\n");

        fraction sum = fractionAdd(dsps[0], dsps[1]);
        printf("Tong hai phan so = "); fractionOutput(sum); printf("\n");

        fraction prod = fractionMul(dsps[0], dsps[1]);
        printf("Tich hai phan so = "); fractionOutput(prod); printf("\n");
    }

    // Sắp xếp mảng phân số tăng dần
    fractionSort(dsps, n);
    printf("\n--- DANH SACH PHAN SO SAU KHI SAP XEP TANG DAN ---\n");
    fractionArrayOutput(dsps, n);

    return 0;
}
