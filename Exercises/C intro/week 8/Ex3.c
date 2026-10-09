#include<stdio.h>
int main(){
int i = 1, sum = 0;
do {
  sum += i;
  i++;
} while (i <= 50);
printf("The sum of 1 to 50 is %d\n", sum);
return 0;
}
//1275 có do thì làm xong mới check dk, trong do chắc chắn làm ít nhất 1 lần
