#include<stdio.h>

int main(){

int x = 25, y = 50, z = 75;
int *ptr;

ptr=&x;
*ptr+=100;
printf("%d\n",*ptr);

ptr=&y;
*ptr+=100;
printf("%d\n",*ptr);

ptr=&z;
*ptr+=100;
printf("%d\n",*ptr);

return 0;
}
