#include <stdio.h>
#define print(x) printf("%d ", x)
int x;
void Q(int z){
z += x;//z=z+x nhưng x =5 vì không có biến trong hàm nên sẽ lấy biến toàn cục là 5
print(z);//7+5=12
}

void P(int *y){
int x = *y + 2;//x=5+2=7
Q(x);
*y = x - 1;//6=7-1, biến x ở hàm P là 7 còn *y thay đổi giá trị x toàn cục nên thành 6
print(x);//7
}

int main(){
x = 5;
P(&x);
print(x);//6
return 0;
}
