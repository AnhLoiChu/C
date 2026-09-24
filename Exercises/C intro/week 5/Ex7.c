#include <stdio.h>
int main()
{
int n, m;
printf("Enter a positive or negative integer: ");
scanf("%i", &n);
printf("\nYou entered %i.\n", n);
printf("Its absolute value is %i.\n",n < 0 ? -n : n);
printf("\nEnter two integers (e.g. 1 2): ");
scanf("%i %i", &n, &m);
printf("\nYou entered %i and %i.\n", n, m);
printf("%i is the larger value.\n",n > m ? n : m);
return 0;
}
//code gốc chưa bỏ biến abs, max, thay thẳng vào phần in
/*#include <stdio.h>
int main()
{
int n, m, abs, max;
printf("Enter a positive or negative integer: ");
scanf("%i", &n);
printf("\nYou entered %i.\n", n);
abs = n < 0 ? -n : n;
printf("Its absolute value is %i.\n", abs);
printf("\nEnter two integers (e.g. 1 2): ");
scanf("%i %i", &n, &m);
printf("\nYou entered %i and %i.\n", n, m);
max = n > m ? n : m;
printf("%i is the larger value.\n", max);
return 0;
}*/
