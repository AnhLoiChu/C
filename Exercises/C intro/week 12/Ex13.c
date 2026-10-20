#include <stdio.h>
int main()
{
int arr[] = {1, 2, 3, 4, 5};
int *p = arr;//*p=1
printf("%d ", ++*p);//*p=2 in ra 2
p += 2;//tăng địa chỉ lên 2 từ arr[0] lên arr[2]
printf("%d ", *p);//in ra arr[2] là 3 vì p đang trỏ tới arr[2]
return 0;
}
