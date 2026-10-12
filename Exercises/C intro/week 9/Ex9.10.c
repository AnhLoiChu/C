#include<stdio.h>

long salary(int hours){
    long tinhluong = 0;
    if ( hours <10 || hours > 65) return 0;
    else if ( 10< hours && hours <= 40){
        tinhluong = 150000*hours;
    }
    else if ( 40 <hours && hours <=65){
        tinhluong = 150000 * 40 + (hours -40)*150000*1.5;
    }
    return tinhluong;
}

int main(){
    int hours;
    scanf("%d",&hours);
    printf("%ld",salary(hours));
    return 0;
}
