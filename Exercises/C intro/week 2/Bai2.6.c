#include<stdio.h>
int main(){
float num;
printf("Enter a number");
scanf("%f",&num);
if(num<0){
printf("%f is negative\n",num);
}
if (num >0){
printf("%f is positive",num);
}
return 0;
}
