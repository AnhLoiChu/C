#include <stdio.h>
#include <string.h>

int main(){
    char str1[100],str2[100];
    fgets(str1,100,stdin);
    str1[strlen(str1) - 1] = '\0';
    fgets(str2,100,stdin);
    str2[strlen(str2) - 1] = '\0';
    printf("%d\n",strlen(str1));
    printf("%d",strlen(str2));
    return 0;
}
