#include <stdio.h>
#define MONTHS 12
int main(){
    int RainFall[MONTHS] = {40, 45, 95, 130, 220, 210, 185,135, 80, 40, 45, 30};
    printf("month \t rainfall (in mm) \n");
    for(int i =0;i<MONTHS;i++){
        printf("%d \t %d\n",i,RainFall[i]);
    }
    return 0;
}
