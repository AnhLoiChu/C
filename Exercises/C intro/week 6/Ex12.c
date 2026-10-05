#include<stdio.h>
#include<math.h>

int main(){
float x1,y1,x2,y2,x3,y3;
float length1,length2,length3;
scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
length1 = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
length2 = sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
length3 = sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));

if(length1+length2 > length3 && length2+length3>length1 && length1+length3>length2) printf("tam giac hop le");
else printf("tam giac khong hop le");
return 0;

}
