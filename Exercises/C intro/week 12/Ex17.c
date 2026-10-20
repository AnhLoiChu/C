#include <stdio.h>
int main() {
int i, N = 5;
float X = 3.5;
char A[4] = {'a','b','c','d'};
void *pi, *pf;
//void *pc = A;//error, void chi de lay gia tri dia chi tong quat chu khong cu the hay lay gia tri truc tiep
char *pc = A;//sua loi
pi = &N;
pf = &X;
printf("%p\n %p\n", pi, pf);
for (i=0; i<4; i++) {
printf("%d ",*(pc++));
}
return 0;
}
