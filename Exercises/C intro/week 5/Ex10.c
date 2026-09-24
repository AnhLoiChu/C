#include<stdio.h>
#include<math.h>
int main(){
printf("%d",7 + 5 && 4 < 2 + 3 - 2 / 3 || 5 > 2 + 1);
return 0;
}
//TÍnh thủ công lần lượt sẽ sai vì thứ tự ưu tiên khác
/*Thứ tự thực hiện chi tiết biểu thức 7 + 5 && 4 < 2 + 3 - 2 / 3 || 5 > 2 + 1:

Chia lấy nguyên: 2 / 3 = 0

Các phép cộng/trừ: 7 + 5 = 12, 2 + 3 - 0 = 5, 2 + 1 = 3

Các phép so sánh: 4 < 5 = 1 (Đúng), 5 > 3 = 1 (Đúng)

Phép logic AND: 12 && 1 = 1 (Đúng) Cả 2 về khác 0 trả về

Phép logic OR: 1 || 1 = 1 (Đúng) 1 trong 2 vế khác 0 là trả về 1*/
