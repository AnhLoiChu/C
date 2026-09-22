#include <stdio.h>
#include <ctype.h> // Thư viện chứa hàm tolower()

int main() {
    char ch;
    printf("Nhap vao mot ky tu: ");
    scanf(" %c", &ch);

    // Chuyển ký tự thành chữ thường (ví dụ: 'A' -> 'a')
    char lower_ch = tolower(ch);

    // Kiểm tra xem ký tự có phải là chữ cái hay không
    if (lower_ch >= 'a' && lower_ch <= 'z') {
        int position = lower_ch - 'a' + 1;
        printf("Ky tu '%c' dung vi tri thu %d trong bang chu cai.\n", ch, position);
    } else {
        printf("'%c' khong phai la mot ky tu trong bang chu cai!\n", ch);
    }

    return 0;
}
/*Nếu bạn in thẳng giá trị số của ký tự 'a', máy tính sẽ in ra số $97$ chứ không phải số $1$.2. Ý nghĩa phép trừ lower_ch - 'a' (Tính khoảng cách)
Vì các chữ cái nằm liền kề nhau trong bảng ASCII, nên khoảng cách giữa một chữ cái bất kỳ tới chữ 'a' chính là số thứ tự chênh lệch của nó:
Nếu nhập 'a': 'a' - 'a' $\rightarrow 97 - 97 = \mathbf{0}$
Nếu nhập 'b': 'b' - 'a' $\rightarrow 98 - 97 = \mathbf{1}$
Nếu nhập 'c': 'c' - 'a' $\rightarrow 99 - 97 = \mathbf{2}$3.
Ý nghĩa phép cộng + 1 (Đưa về thứ tự con người tính)Kết quả phép trừ ở trên bắt đầu đếm từ số $0$ (chữ 'a' ra $0$, chữ 'b' ra $1$).
Nhưng con người chúng ta đếm vị trí bảng chữ cái bắt đầu từ số $1$ (chữ 'a' là vị trí thứ $1$, chữ 'b' là vị trí thứ $2$).
Do đó, ta phải cộng thêm $1$ để kết quả đúng với thực tế:Chữ 'a': $(97 - 97) + 1 = 0 + 1 = \mathbf{1}$Chữ 'b': $(98 - 97) + 1 = 1 + 1 = \mathbf{2}$
Chữ 'c': $(99 - 97) + 1 = 2 + 1 = \mathbf{3}$
Tóm lại: Phép toán lower_ch - 'a' + 1 dùng để biến đổi giá trị mã ASCII (ví dụ $97, 98, 99$) về đúng vị trí chuẩn trong bảng chữ cái ($1, 2, 3$)*/
