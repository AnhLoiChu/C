#include<stdio.h>
int main(){
printf("|%5d|\n",42);
printf("|%-5d|\n",42);
printf("|%3c|\n",'z');
printf("|%-3c|\n",'z');
printf("|%10.5f|\n",2.71828);
printf("|%-5.2f|\n",2.71828);
printf("|%5.2f|\n",2.71828);
printf("|%.6f|\n",2.718);
printf("|%-5d|\n",2.71828);
printf("|%s|\n","printf");
printf("|%8s|\n","printf");
return 0;
}
