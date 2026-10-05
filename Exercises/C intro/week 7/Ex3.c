#include<stdio.h>
int main(){
int i;
int x = 0;
for(i=1;i<=100;i++){
    x+= i;
    if((x%i)==0) {i--;}
    printf("\nx=%d",x);
    printf("i=%d",i);
    }
printf("\nKet qua sau khi thuc hien xong lap");
printf("\n x =%d",x);
printf("\n i = %d",i);
return 0;
}

//bị vòng lặp vô hạn vì x luôn chia hết cho i ban đầu là 1 xong giảm về 0 để kết thúc,sau đó vòng lặp mới bắt đầu với giá trị i++ thì i lại về 1
