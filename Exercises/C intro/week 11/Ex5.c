#include<stdio.h>

void swap3(int *a, int *b, int *c){
    int temp1=*a;
    int temp2=*b;
    int temp3=*c;

    *a=temp2;
    *b=temp3;
    *c=temp1;

}

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("Truoc khi thay doi: %d %d %d\n",a,b,c);
    swap3(&a,&b,&c);
    printf("Sau khi thay doi : %d %d %d",a,b,c);
    return 0;
}
