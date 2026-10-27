#include<stdio.h>
#include<string.h>

int main(){
    int n;
    char string[100][50];
    printf("Input number of strings: ");
    scanf("%d",&n);
    getchar();
    printf("Input strings: \n");
    for(int i=0;i<n;i++){
        fgets(string[i],50,stdin);
        string[i][strlen(string)-1]='\0';
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            char temp[50];
            if(strcmp(string[i],string[j])>0 ){
                strcpy(temp,string[i]);
                strcpy(string[i],string[j]);
                strcpy(string[j],temp);
            }
        }
    }

    printf("The string appears after sorting: \n");
    for(int i=0;i<n;i++){
        printf("%s\n",string[i]);
    }
    return 0;
}
