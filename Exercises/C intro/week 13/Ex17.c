#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char x[100];
    printf("Input the string :");
    fgets(x,100,stdin);
    x[strlen(x)-1]='\0';
    int j=0;
    for(int i=0;x[i]!= '\0';i++){
        if(isalpha(x[i])){
            x[j]=x[i];
            j++;
        }
    }
    x[j] = '\0';

    printf("After removing the Output string: %s",x);
    return 0;
}
