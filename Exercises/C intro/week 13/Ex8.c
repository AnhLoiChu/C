#include <string.h>
#include <stdio.h>

int strend(char *s, char *t)
{
int Result = 0;
int s_length = 0;
int t_length = 0;

/* get the lengths of the strings */
s_length = strlen(s);
t_length = strlen(t);
if(t_length <= s_length)  {
/* advance the s pointer to where the string t would have to start in string s */
s += s_length - t_length;//dịch con trỏ tới vị trí t ở cuối chuỗi
/* and make the compare using strcmp */
if(0 == strcmp(s, t)){
Result = 1;
}
}
return Result;
}

int main(void)
{
char *s1 = "some really long string.";
char *s2 = "ng.";
char *s3 = "ng";
if(strend(s1, s2)) {
printf("The string (%s) has (%s) at the end.\n", s1, s2);
} else {
printf("The string (%s) doesn't have (%s) at the end.\n", s1, s2);
}
if(strend(s1, s3)){
printf("The string (%s) has (%s) at the end.\n", s1, s3);
}
else {
printf("The string (%s) doesn't have (%s) at the end.\n", s1, s3);
}
return 0;
}
