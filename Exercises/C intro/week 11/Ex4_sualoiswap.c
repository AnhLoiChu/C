#include<stdio.h>

void swap(int *px,  int *py)
{
int temp = *px;
*px = *py;
*py = temp;
}

int main(){
int x,y;
scanf("%d %d",&x,&y);
swap(&x,&y);
printf("%d %d",x,y);
return 0;
}
