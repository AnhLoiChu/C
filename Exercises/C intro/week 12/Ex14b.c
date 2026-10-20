#include <stdio.h>
void f(char**);
void f(char **p){
char *t;
t = (p += sizeof(int))[-1];
printf("%s\n", t);

}

int main()
{
char *argv[] = { "ab", "cd", "ef", "gh", "ij", "kl" };
f(argv);
//cách khác int size = sizeof(argv) / sizeof(argv[0]); để lấy số phần tử mảng tĩnh
for(int i=0;i<6;i++){//i<size được
    printf("%s ",*(argv+i));//in các phần tử trong mảng argv
}


return 0;
}
