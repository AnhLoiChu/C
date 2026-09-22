#include<stdio.h>
int main(){
char str[10];
printf("Nhap string: ");
scanf("%[aeiou]",str);
printf("Ket qua: %s",str);
return 0;
}
