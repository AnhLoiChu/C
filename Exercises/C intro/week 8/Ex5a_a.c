#include<stdio.h>
int main(){

int i;
for(i=1; i<=10; i++) {
    if (i == 5)
    break;
    //continue;
    printf("%d\n", i);
    }
return 0;
}
//break là sẽ dừng while luôn, còn continue sẽ bỏ qua các câu lệnh ở dưới để lặp lại while
