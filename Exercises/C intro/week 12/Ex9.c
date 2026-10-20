#include <stdio.h>
int main() {
int*   ptrarray[4];
int w = 100, x = 200, y = 300, z = 400;
ptrarray[0] = &w;//ptrarray0 là con trỏ trở tới địa chỉ của w có giá trị 100
ptrarray[1] = &x;//Tương tự
ptrarray[2] = &y;//Tương tự
ptrarray[3] = &z;//Tương tự

for (int i = 0; i < 4; i++) {
    printf("The value %d has the adddress %p\n",*ptrarray[i], ptrarray[i]);
}
return 0;
}
