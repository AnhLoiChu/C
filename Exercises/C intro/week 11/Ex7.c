#include<stdio.h>

void incomeplus(long *current,int year){
    if(year > 3 ) *current+=3000000;
}

int main(){
    int year;
    long salary;

    scanf("%ld %d",&salary,&year);
    incomeplus(&salary,year);
    printf("%ld",salary);
    return 0;
}
