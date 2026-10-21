#include <stdio.h>
#include <string.h>

int main() {
    char codes[5][10] = {
        "TV127",
        "CD057",
        "TA877",
        "CS409",
        "PC655"
    };

    char descriptions[5][50] = {
        "31 inch Television",
        "CD Player",
        "Answering Machine",
        "Car Stereo",
        "Personal Computer"
    };

    char input[20];
    int found = 0;

    fgets(input, sizeof(input), stdin);
    input[strlen(input)-1] = '\0';

    for (int i = 0; i < 5; i++) {
        if (strstr(codes[i], input) != NULL) {
            printf("Tim thay san pham co ma day du: %s co mo ta la %s\n", codes[i],descriptions[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay san pham!\n");
    }

    return 0;
}
