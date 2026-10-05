#include<stdio.h>
int main(){
int m;
float money,vat,env,total;
scanf("%d",&m);
if(m < 0){
    printf("so nuoc khong hop le");
    return 0;
}
else {
    if(m <=10){
        money = m*5.973;
    }
    else if(10<m && m<=20 ){
        money = 5.973*10 + (m-10)*7.052;
    }
    else if(20<m && m<=30 ){
        money = 5.973*10 + 10*7.052 + (m-20)*8.669;
    }
    else {
        money = 5.973*10 + 10*7.052 + 10*8.669 + (m-30)*15.929;
    }
}
vat = money * 0.05;
env = money *0.1;
total = money + vat +env;
printf("So tien can tra la %.3f",total);
return 0;
}
