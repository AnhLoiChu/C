#include <stdio.h>
#include <string.h>
int main()
{
char s1[ 20 ] = "Happy ";
char s2[] = "New Year ";
char s3[ 40 ] = "";
printf( "s1 = %s \n s2 = %s \n", s1, s2 );//in ra s1 là Happy và s2 New Year
printf( "strcat( s1, s2 ) = %s \n", strcat( s1, s2 ) );//nối s2 vào s1
printf( "strncat( s3, s1, 6 ) = %s\n", strncat( s3, s1, 6 ) );//nối 6 kí tự từ s1 vào s3
printf( "strcat( s3, s1 ) = %s\n", strcat( s3, s1 ) ); //s3 đang là Happy,s1 là Happy new year do nối từ s2 vào nên sẽ ra happy happy new year
return 0;
}
