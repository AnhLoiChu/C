#include<stdio.h>
int main(){
char c;
int count = 0;
c = getchar();
while(c != '.'){
    count++;
    c = getchar();
}
printf("Number of characters is %d\n",count);
return 0;
}
