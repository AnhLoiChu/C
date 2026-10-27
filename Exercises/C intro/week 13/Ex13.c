#include<stdio.h>
#include<string.h>

int main(){
    char x[100];
    char char_max;
    int max_count=0;
    fgets(x,100,stdin);
    x[strlen(x)-1]='\0';
    for(int i=0;i<strlen(x);i++){
    int count =0;
        for(int j=0;j<strlen(x);j++){
            if(x[i]==x[j]) count++;
        }
        if(count>max_count) {
            max_count=count;
            char_max=x[i];
        }
    }
    printf("ky tu %c xuat hien nhieu nhat voi %d lan",char_max,max_count);
    return 0;
}
