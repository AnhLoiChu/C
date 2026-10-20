#include <stdio.h>
const int MAX = 3;
int main () {
int  var[] = {10, 100, 200};
int i, *ptr[MAX];
for ( i = 0; i < MAX; i++) {
ptr[i] = &var[i]; /* assign the address of integer. */
}
for ( i = 0; i < MAX; i++) {
printf("Value of var[%d] = %d\n", i, *ptr[i] );//in ra 10,100,200 vì ptr[i] trỏ tới var[i] theo thứ tự
}
return 0;
}
