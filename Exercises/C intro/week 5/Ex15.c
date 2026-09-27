#include<stdio.h>
#include<math.h>

int main(){
int seconds,hour,minute;
scanf("%d",&seconds);
hour = seconds / 3600;
minute = (seconds - 3600*hour)/60;
seconds = seconds - 3600*hour - 60*minute;
printf("%d:%d:%d",hour,minute,seconds);
return 0;

}
/*hour = total_seconds / 3600;
    minute = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60; */

