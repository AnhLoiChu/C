#include<stdio.h>
#include<math.h>
int main(){
int salary,in,out;
printf("Nhap vao so gio lam viec dinh muc: ");
scanf("%d",&in);
printf("Nhap vao so gio lam viec ngoai gio: ");
scanf("%d",&out);
salary = 25000*in+40000*out;
printf("So tien luong la: %d",salary);
return 0;

}
