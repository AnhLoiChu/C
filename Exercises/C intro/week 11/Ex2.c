#include<stdio.h>

int main(){
int x,y,z;
int *ptr1,*ptr2,*ptr3;
scanf("%d %d %d",&x,&y,&z);
ptr1=&x;
printf("x=%d\n",*ptr1);
ptr2=&y;
printf("y=%d\n",*ptr2);

ptr3=&z;
printf("z=%d\n",*ptr3);

return 0;
}
