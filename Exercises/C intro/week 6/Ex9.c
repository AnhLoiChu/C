#include<stdio.h>
int main(){
int a=1;
scanf("%d", &a);
switch ( a ) {
case 1:
 printf("a=1\n");
case 2:
 printf("a=2\n");
 break;
case 3:
 printf("a=3\n");
}
return 0;
}
/* a = 1 thì ra 1 và 2
a =2 ra 2
a =3 ra 3
a = 4 không ra gì
chạy cho đến khi break, break là khi thỏa mãn trước đó sẽ ngắt switch luôn*/

