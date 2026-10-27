#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Input number of students: ");
    scanf("%d", &n);
    getchar();

    char list[100][50];

    printf("Input full names:\n");
    for (int i = 0; i < n; i++) {
        fgets(list[i], sizeof(list[i]), stdin);
        size_t len = strlen(list[i]);
        list[i][len - 1] = '\0';
    }

    // Thuật toán sắp xếp nổi bọt (Bubble Sort)
    char temp[50];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            char *name_i = strrchr(list[i], ' ');
            char *name_j = strrchr(list[j], ' ');

            char *tieu_chi_i = (name_i != NULL) ? (name_i + 1) : list[i];
            char *tieu_chi_j = (name_j != NULL) ? (name_j + 1) : list[j];

            int sosanh_ten = strcmp(tieu_chi_i, tieu_chi_j);

            // Điều kiện 1: Nếu tên của i đứng sau tên của j -> Đổi chỗ
            if (sosanh_ten > 0) {
                strcpy(temp, list[i]);
                strcpy(list[i], list[j]);
                strcpy(list[j], temp);
            }
            // Điều kiện 2: Nếu tên trùng nhau (sosanh_ten == 0) -> So sánh theo họ + đệm (toàn bộ chuỗi)
            else if (sosanh_ten == 0) {
                if (strcmp(list[i], list[j]) > 0) {
                    strcpy(temp, list[i]);
                    strcpy(list[i], list[j]);
                    strcpy(list[j], temp);
                }
            }
        }
    }

    // In ra danh sách sau khi đã sắp xếp
    printf("\nDanh sach sau khi sap xếp:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", list[i]);
    }

    return 0;
}
