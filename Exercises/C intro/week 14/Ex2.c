#include<stdio.h>
#include<string.h>

struct myStructure{
    int myNum;
    char myLetter;
    char myString[30];
};

int main() {
struct myStructure s1;
// Trying to assign a value to the string
//s1.myString = "Some text";
strcpy(s1.myString,"Some text");
// Trying to print the value
printf("My string: %s", s1.myString);
return 0;
}
//s1.String là địa chỉ con trỏ trỏ tới phần tử đầu tiên
