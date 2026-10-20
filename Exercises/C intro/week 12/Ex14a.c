#include <stdio.h>
void f(char **p){
char *t;
t = (p += sizeof(int))[-1];//sizeof(int) =4,p trỏ tới argv, p sau tăng sẽ trỏ tới argv[4]
printf("%s\n", t);
}

int main()
{
char *argv[] = { "ab", "cd", "ef", "gh", "ij", "kl" };
f(argv);
return 0;
}
//p=p+4-1 vì code tương ứng *(p-1) [-1] để lùi lại 1 vị trí nên t sẽ là argv[3]
