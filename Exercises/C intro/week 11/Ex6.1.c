#include<stdio.h>
int main(){
int x,y,z;
int *p,*q,*r;

scanf("%d %d %d",&x,&y,&z);
p=&x;
q=&y;
r=&z;

printf("%d %d %d\n%d %d %d\n%p %p %p",x,y,z,*p,*q,*r,p,q,r);
return 0;
}
