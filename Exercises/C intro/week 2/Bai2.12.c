#include<stdio.h>
int main(){
int tong,nam,thang,ngay;
scanf("%d",&tong);
nam = tong/365;
thang = (tong-365*nam)/30;
ngay= tong -365*nam-30*thang;
printf("So ngay: %d\n",tong);
printf("So nam: %d\n",nam);
printf("So thang: %d\n",thang);
printf("So ngay: %d\n",ngay);
return 0;

}
