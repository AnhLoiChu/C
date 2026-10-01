#include<stdio.h>
int thang;
int main(){
scanf("%d",&thang);
if ( thang <=0 || thang > 12) printf("Input khong hop le");
else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) printf("30 ngay");
else if (thang == 2) printf("28 hoac 29 ngay");
else printf("31 ngay");
return 0;
}
