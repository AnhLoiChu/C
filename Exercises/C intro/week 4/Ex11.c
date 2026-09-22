#include <stdio.h>

int main() {
    char title[30];
    int Qty, ISBN, Price, Total, VAT, Sum;

    printf("Enter ISBN, Title, Price, Qty: ");
    scanf("%d %s %d %d", &ISBN, title, &Price, &Qty);

    Total = Price * Qty;
    VAT = Total * 0.04;
    Sum = Total + VAT;


    printf("\nBK Bookseller\n");


    printf("%s %s %s %s %s\n", "Qty", "ISBN", "Title", "Price", "Total");

    printf("%d %d %s %d %d\n", Qty, ISBN, title, Price, Total);

    printf("VAT: %d\n", VAT);
    printf("You pay: %d\n", Sum);

    return 0;
}
