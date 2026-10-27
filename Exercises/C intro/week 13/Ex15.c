#include<stdio.h>
#include<string.h>

int main(){
    char x[100],substr[100];
    int m,n;
    int j=0;
    printf("Input the string :");
    fgets(x,100,stdin);
    x[strlen(x)-1]='\0';
    printf(" Input the position to start extraction : ");
    scanf("%d",&m);
    printf("Input the length of substring :");
    scanf("%d",&n);
    for(int i=m-1;i<m-1+n&&x[i]!='\0';i++){
            substr[j]=x[i];
            j++;
        }
    printf("The substring retrieve from the string is: %s",substr);
    return 0;
}
