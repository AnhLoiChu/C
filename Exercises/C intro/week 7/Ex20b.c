#include <stdio.h>

int main() {
int n;
scanf("%d", &n);
for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j++) {
        printf("%d", j);
        }
    for(int k=i-1;k>0;k--){
        printf("%d",k);
        }
    printf("\n");
    }

    return 0;
}
