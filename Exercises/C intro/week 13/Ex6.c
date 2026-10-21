#include <stdio.h>
#include <string.h>
void main(void){
char name[41];
printf("Enter your first and last names, separatedby a space:\n");
gets(name);
nameSlice(name);
printf("Your first name is: %s\n", name);//in ra đến khi gặp \0 đầu tiên
}
// This function accepts a character array as its
// argument. It scans the array looking
// for a space. When it finds one, it replaces it
// with a null terminator.
void nameSlice(char userName[]){
int count = 0;
while (userName[count] != ' ' &&userName[count] != '\0'){
    count++;
    if (userName[count] == ' ') userName[count] = '\0';//khi gặp dấu cách sẽ biến nó thành \0 để kết thúc chuối

    }
}
