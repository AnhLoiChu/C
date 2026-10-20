#include<stdio.h>
#include<string.h>

char* my_strcpy(char *destination, char *source){
    char *p = destination;
    while (*source != '\0'){
        *p++ = *source++;
    }
    *p = '\0';//do destination sau khi copy ở vòng lặp chưa có kí tự kết thúc ở cuối
    return destination;
}

int main() {
    char source[50];
    char destination[50];
    fgets(source,50,stdin);
    source[strlen(source)-1]='\0';
    my_strcpy(destination, source);

    printf("Chuoi nguon (source): %s\n", source);
    printf("Chuoi dich sau khi copy (destination): %s\n", destination);

    return 0;
}
