#include <stdio.h>
int main(){
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0; //x =0
    printf(" x = %d\n", x);
    printf(" *ptr = %d \n", *ptr); //0
    *ptr += 5; //*ptr =5
    printf(" x  = %d\n", x);//x=5
    printf(" *ptr = %d\n", *ptr); // 5
    (*ptr)++; //lên 6
    printf(" x = %d\n", x);//x=6
    printf(" *ptr = %d\n", *ptr); //6
    return 0;
}
