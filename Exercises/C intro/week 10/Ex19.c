#include <stdio.h>

int main() {
    int n, m;
    int a[10][10];

    // Nhập số hàng n và số cột m
    scanf("%d %d", &n, &m);

    // Nhập các phần tử của ma trận
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;

    // Duyệt ma trận theo hình xoắn ốc
    while (top <= bottom && left <= right) {
        // 1. In từ trái sang phải ở hàng trên cùng
        for (int j = left; j <= right; j++) {
            printf("%d ", a[top][j]);
        }
        top++;

        // 2. In từ trên xuống dưới ở cột bên phải
        for (int i = top; i <= bottom; i++) {
            printf("%d ", a[i][right]);
        }
        right--;

        // 3. In từ phải sang trái ở hàng dưới cùng (nếu vẫn còn hàng)
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                printf("%d ", a[bottom][j]);
            }
            bottom--;
        }

        // 4. In từ dưới lên trên ở cột bên trái (nếu vẫn còn cột)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", a[i][left]);
            }
            left++;
        }
    }

    return 0;
}
