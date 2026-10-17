#include <stdio.h>

int countZero(int a[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if (a[i] == 0) count++;
    }
    return count;
}

int maxZeroStreak(int b[], int size) {
    int max_len = 0;
    int current_len = 0;

    for (int i = 0; i < size; i++) {
        if (b[i] == 0) {
            current_len++;
            if (current_len > max_len) {
                max_len = current_len;
            }
        } else {
            current_len = 0;
        }
    }
    return max_len;
}

void countFrequencies(int a[], int size) {
    for (int i = 0; i < size; i++) {
        // Kiểm tra xem giá trị a[i] đã xuất hiện ở các vị trí trước đó chưa
        int already_printed = 0;
        for (int j = 0; j < i; j++) {
            if (a[j] == a[i]) {
                already_printed = 1;
                break;
            }
        }

        // Nếu chưa từng xuất hiện trước đó, tiến hành đếm và in ra
        if (already_printed==0) {
            int count = 0;
            for (int j = 0; j < size; j++) {opll0oppppp
                if (a[j] == a[i]) {
                    count++;
                }
            }
            printf("So %d xuat hien %d lan\n", a[i], count);
        }
    }
}

int main() {
    int size;
    int a[100];
    scanf("%d", &size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("So phan tu 0: %d\n", countZero(a, size));
    printf("Chuoi 0 dai nhat: %d\n", maxZeroStreak(a, size));
    countFrequencies(a, size);

    return 0;
}
