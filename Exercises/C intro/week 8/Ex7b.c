#include <stdio.h>

int main() {
    int c;
    int d;

    while ((c = getchar()) != EOF) {
        d = 0;

        // 1. Xử lý dấu gạch chéo ngược '\'
        if (c == '\\') {
            putchar('\\');
            putchar('\\');
            d = 1;
        }

        // 2. Xử lý phím Tab ('\t')
        if (c == '\t') {
            putchar('\\');
            putchar('t');
            d = 1;
        }

        // 3. Xử lý phím Backspace ('\b')
        if (c == '\b') {
            putchar('\\');
            putchar('b');
            d = 1;
        }

        // 4. Xử lý phím Enter / Xuống dòng ('\n')
        if (c == '\n') {
            putchar('\\');
            putchar('n');
            putchar('\n'); // Xuống dòng thực sự để dễ quan sát
            d = 1;
        }

        // 5. Bỏ qua '\r' trên Windows để tránh bị đè chữ / lỗi hiển thị
        if (c == '\r') {
            d = 1;
        }

        // 6. Các ký tự bình thường khác
        if (d == 0) {
            putchar(c);
        }
    }

    return 0;
}
