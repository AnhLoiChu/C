#include<stdio.h>

int isLeapYear(int year){
    if (year % 4== 0 && year %100 != 0) return 1;
    else if (year%100==0 && year %400 ==0) return 1;
    return 0;
}

int main(){
    int year;
    scanf("%d",&year);
    if (isLeapYear(year)==1) printf("nam nhuan");
    else printf ("khong phai nam nhuan");
    return 0;
}
