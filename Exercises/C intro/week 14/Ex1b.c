#include<stdio.h>

struct myStructure {
int myNum;
char myLetter;
};
int main() {

// Create different struct variables
struct myStructure s1;
struct myStructure s2;
struct myStructure s3;

// Assign values to different struct variables
s1.myNum = 13;
s1.myLetter = 'B';

s2.myNum = 20;
s2.myLetter = 'C';

printf("%d\n",s2.myNum);
printf("%c\n",s2.myLetter);

s3.myNum=s1.myNum+s2.myNum;
s3.myLetter='A';

printf("%d\n",s3.myNum);
printf("%c\n",s3.myLetter);

return 0;
}

