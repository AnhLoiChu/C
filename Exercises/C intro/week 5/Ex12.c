#include<stdio.h>
#include<math.h>
int main(){
float luongcoban,thue,luongthucnhan,DA;
scanf("%f",&luongcoban);
DA=0.12*luongcoban;
thue = 0.14*luongcoban + 0.15 * luongcoban;
luongthucnhan = luongcoban + DA + 150+120+450-thue;
printf("%f",luongthucnhan);
return 0;
}
