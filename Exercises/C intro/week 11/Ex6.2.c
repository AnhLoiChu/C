#include<stdio.h>

void swap3(int *a,int *b,int *c){
    int temp1=*a;
    int temp2=*b;
    int temp3=*c;

    *a=temp2;
    *b=temp3;
    *c=temp1;
}


int main(){
int x,y,z;
int *p,*q,*r;

scanf("%d %d %d",&x,&y,&z);
p=&x;
q=&y;
r=&z;
swap3(&x,&y,&z);
printf("%d %d %d\n%d %d %d\n%p %p %p",x,y,z,*p,*q,*r,p,q,r);


return 0;
}
