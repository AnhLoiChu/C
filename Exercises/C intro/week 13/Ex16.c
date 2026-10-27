#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(){
    char x[100];
    int count=0;
    printf("Input the string: ");
    fgets(x,100,stdin);

    // Chuyển toàn bộ xâu về chữ thường để không phân biệt chữ hoa / thường
    for (int i = 0; x[i] != '\0'; i++) {
        x[i] = tolower(x[i]);
    }

    char *freq=x;
    while((freq=strstr(freq,"the")!=NULL)){
        count++;
        freq+=3;//Dịch con trỏ tiến lên 3 bước (độ dài của chữ "the") để tìm tiếp lần sau
    }



    printf("The frequency of the word 'the' is: %d",count);
    return 0;
}
