#include<stdio.h>
#include<string.h>

void replace(char str[], char replace_what,char replace_with){
    for (int i = 0; str[i] != '\0'; ++i) {
        if(str[i]==replace_what) str[i] = replace_with;
    }
}

int main(){
    char x[100];
    char what,with;
    fgets(x,100,stdin);
    x[strlen(x) - 1] = '\0';
    scanf("%c %c",&what,&with);
    replace(x,what,with);
    printf("%s",x);
    return 0;
}
