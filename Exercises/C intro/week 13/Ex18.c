#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char x[100];
    char largest_char[100] = "";
    char min_char[100] = "";
    int max_len = -1;
    int min_len = 1000; // Khởi tạo một số lớn ban đầu

    printf("Input the string :");
    fgets(x, sizeof(x), stdin);

    size_t len = strlen(x);
    x[strlen(x)-1]='\0';

    int i = 0;
    while (i < len) {
        // Bỏ qua các khoảng trắng để tìm điểm bắt đầu của từ
        while (i < len && x[i] == ' ') {
            i++;
        }
        if (i >= len) break;

        // Xác định độ dài và vị trí của từ hiện tại
        int start = i;
        while (i < len && x[i] != ' ') {
            i++;
        }
        int word_len = i - start;

        // Trích xuất từ hiện tại vào mảng tạm
        char current_word[100];
        int j;
        for (j = 0; j < word_len; j++) {
            current_word[j] = x[start + j];
        }
        current_word[j] = '\0'; // Kết thúc chuỗi

        // Cập nhật từ dài nhất
        if (max_len == -1 || word_len > max_len) {
            max_len = word_len;
            strcpy(largest_char, current_word);
        }

        // Cập nhật từ ngắn nhất
        if (min_len == 1000 || word_len < min_len) {
            min_len = word_len;
            strcpy(min_char, current_word);
        }
    }

    // In kết quả đúng chuẩn theo yêu cầu đề bài
    printf("The largest word is '%s'\n", largest_char);
    printf("and the smallest word is '%s'\n", min_char);
    printf("in the string : '%s'.\n", x);

    return 0;
}
