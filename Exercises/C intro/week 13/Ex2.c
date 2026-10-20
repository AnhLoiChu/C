#include<stdio.h>
#include<string.h>

int spacecounter(char x[]){
    int i=0;
    int count =0;
    while(x[i]!='\0'){
        if(x[i]==' ') count++;
        i++;
    }
    return count;
}

int main(){
    int space=0;
    char str[100];

    fgets(str, 100, stdin);

    space = spacecounter(str);
    printf("%d",space);
    return 0;
    }
