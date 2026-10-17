#include<stdio.h>

void swap3(int a,int b,int c){
    int temp=a;
    a=b;
    b=c;
    c=temp;
}


int main(){
int x,y,z;
int *p,*q,*r;

scanf("%d %d %d",&x,&y,&z);
p=&x;
q=&y;
r=&z;
swap3(p,q,r);
printf("%d %d %d\n%d %d %d\n%p %p %p",x,y,z,*p,*q,*r,p,q,r);


return 0;
}
