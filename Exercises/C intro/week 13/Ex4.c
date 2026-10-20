#include<stdio.h>
#include<string.h>
#include<ctype.h>

int check(char str[]){
    if (strlen(str) != 7) return 0;

    for(int i=0;i<3;i++){
        if(isalpha(str[i])==0) return 0;
    }

    for(int j=3;j<7;j++){
        if(isdigit(str[j])==0) return 0;
    }
    return 1;
}

int main(){
    char x[10];
    int m,length;
    fgets(x,10,stdin);
    length=strlen(x);
    if (length > 0 && x[length - 1] == '\n') x[length - 1] = '\0';
    m=check(x);
    if(m==1) printf("TRUE");
    else printf("False");
    return 0;
}
