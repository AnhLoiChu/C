#include<stdio.h>

void printnchars(int ch, int n){
    for(int i = 1;i<=n;i++){
        printf("%c",ch);
    }
    printf("\n");
}

int main(){
    int n;
    char ch;
    scanf("%d %c",&n,&ch);
    for(int j =1;j<=n;j++){
        printnchars(ch,j);
    }
    return 0;
}








