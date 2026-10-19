#include <stdio.h>
int main() {

int x[5] = {1, 2, 3, 4, 5};
int* ptr;
// ptr is assigned the address of the third element
ptr = &x[2];
printf("*ptr = %d \n", *ptr); //3
printf("*(ptr+1) = %d \n", *(ptr+1)); //4
printf("*(ptr+1) = %d \n", ptr[1]); //4 vì ptr[1] chính là x[3]
printf("*(ptr-1) = %d\n", *(ptr-1));  //2
printf("*(ptr-1) = %d\n", ptr[-1]); //ptr[-1] chính là x[1] = 2

printf("ptr = %p \n", ptr);
printf("(ptr+1) = %p \n", ptr+1);
printf("(ptr-1) = %p \n", ptr-1);

return 0;
}
