#include<stdio.h>
int a = 3,b=5;
void badSwap ( int a, int b )
{ int temp;
temp = a;
a = b;
b = temp;
printf("Called environment: %d %d\n",a,b);
}

int main(void)
{
printf("Calling environment: %d %d\n",a,b);
badSwap( a, b );
printf("Calling environment: %d %d\n",a,b);
return 0;
}

