#include<string.h>
#include<stdio.h>

int main(){
    char input[100];
    int count=0;
    fgets(input,100,stdin);
    input[strlen(input)-1]='\0';
    for(int i=0;i<strlen(input);i++){
        if(input[i] != ' ' && (i == 0 || input[i - 1] == ' ')) count++;//phát hiện từ để count tránh nhiều space
    }
    printf("Total number of words in the string is: %d ",count);
    return 0;
}
