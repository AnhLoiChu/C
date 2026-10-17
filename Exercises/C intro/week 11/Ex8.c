# include <stdio.h>
void fun(int *ptr){
    *ptr = 30; //giá trị chỗ ptr trỏ tới là 30
}
int main(){
    int y = 20;
    fun(&y);
    printf("%d", y);
    return 0;
}
