#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Nhap ho va ten: ");
    fgets(str, sizeof(str), stdin);

    // 1. Xóa phím Enter '\n' ở cuối do fgets tự động thêm vào
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // 2. Bỏ qua các dấu cách thừa ở cuối chuỗi (nếu có)
    int end = len - 1;
    while (end >= 0 && str[end] == ' ') {
        end--;
    }

    // Nếu chuỗi trống hoặc toàn dấu cách
    if (end < 0) {
        printf("Loi: Chua nhap du lieu!\n");
        return 0;
    }

    // 3. Dịch lùi từ cuối về đầu để tìm dấu cách phân tách giữa tên và họ/đệm
    int i = end;
    while (i >= 0 && str[i] != ' ') {
        i--;
    }

    // Nếu duyệt hết mà không thấy dấu cách nào -> Chứng tỏ chỉ có đúng 1 từ -> Báo lỗi
    if (i < 0) {
        printf("Loi: Chi nhap vao 1 tu duy nhat!\n");
        return 0;
    }

    // 4. In ra phần tên (từ nằm ở đoạn sau dấu cách cuối cùng đó)
    printf("Ten la: ");
    for (int j = i + 1; j <= end; j++) {
        printf("%c", str[j]);
    }
    printf("\n");

    return 0;
}
