#include<stdio.h>
int main(){
int money,to500,to200,to100,to50,to20,to10,to5,to2,to1;
scanf("%d",&money);
to500 = money/500000;
to200 = (money%500000)/200000;
to100 = (money-to500*500000-to200*200000)/100000;
to50 = (money-to500*500000-to200*200000-to100*100000)/50000;
to20 = (money-to500*500000-to200*200000-to100*100000-to50*50000)/20000;
to10 = (money-to500*500000-to200*200000-to100*100000-to50*50000-to20*20000)/10000;
to5 = (money-to500*500000-to200*200000-to100*100000-to50*50000-to20*20000-to10*10000)/5000;
to2 = (money-to500*500000-to200*200000-to100*100000-to50*50000-to20*20000-to10*10000-to5*5000)/2000;
to1 = (money-to500*500000-to200*200000-to100*100000-to50*50000-to20*20000-to10*10000-to5*5000-to2*2000)/1000;
printf("%d\n",money);
if (to500>0) printf(" 500 nghin x %d\n ",to500);
if (to200>0)printf("200 nghin x %d\n ",to200);
if (to100>0)printf("100 nghin x %d\n ",to100);
if (to50>0)printf("50 nghin x %d\n ",to50);
if (to20>0)printf("20 nghin x %d\n ",to20);
if (to10>0)printf("10 nghin x %d\n ",to10);
if (to5>0)printf("5 nghin x %d\n ",to5);
if (to2>0)printf("2 nghin x %d\n ",to2);
if (to1>0)printf("1 nghin x %d\n ",to1);
return 0;
}
