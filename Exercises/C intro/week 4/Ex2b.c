#include<stdio.h>
int main(){
char x[10],y[10];
int MSSV;
printf("Enter name, MSSV and class");
scanf("%s%d%s",x,&MSSV,y);
printf("Name: \"%s\"\n ",x);
printf("MSSV: %d\n",MSSV);
printf("Class: \"%s\"\n",y);
return 0;
}
