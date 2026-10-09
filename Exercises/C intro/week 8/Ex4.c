#include<stdio.h>
int main(){
int counter = 1;
do {
printf( "%d  ", counter );
} while (++counter <= 10);

printf("counter: %d\n", counter);
// ----------------------
counter = 1;

do {
printf( "%d  ", counter );
} while (counter++ <= 10);


printf("counter: %d", counter);
return 0;
}
//++counter là tăng lên rồi mới so sánh nên sẽ dừng trước khi in ra số 11,counter sẽ là 11 còn in ra đến 10
//counter++ là so sánh xong mới cộng thì sẽ là 12, in ra đến 11, vòng lặp chạy thêm 1 lần
