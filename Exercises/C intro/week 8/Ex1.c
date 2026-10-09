#include <stdio.h>
#define PERIOD '.'
int main() {
   char ch;
   while ( (ch = getchar()) != PERIOD)
   putchar(ch);
   printf("Good Bye.\n");
   return 0;
}
//getchar lấy đến khi gặp dấu "." nên in ra Number One Two Three Three Good Bye
