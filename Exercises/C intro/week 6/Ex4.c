/* Guess my number . */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
int myNum, yourNum ;
srand ( time ( NULL )); /* Seed */
myNum = 1 + rand () % 10; /* Pick a number */
printf (" Guess my number ( between 1 and 10): ");
scanf ("%d", & yourNum );
if (yourNum == myNum) printf("Correct");
else{
if (yourNum < myNum) printf(" Your guess was too small\n");
else if (yourNum > myNum) printf(" Your guess was too high\n");
printf("Con 1 lan doan\n");
}
printf (" Guess my number ( between 1 and 10): ");
scanf ("%d", & yourNum );
if (yourNum == myNum) printf("Correct");
else{
if (yourNum < myNum) printf(" Your guess was too small\n");
else if (yourNum > myNum) printf(" Your guess was too high\n");
printf("The correct number was %d",myNum);
}
return 0;
}
