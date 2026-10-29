#include <stdio.h>

typedef struct date {
    unsigned char day;
    unsigned char month;
    int year;
} date_t;

void input_date(date_t *pt) {
    int maxday;

    do {
        printf("Nhap ngay thang nam (dd mm yyyy): ");
        scanf("%hhu %hhu %d", &(pt->day), &(pt->month), &(pt->year));

        if (pt->month == 1 || pt->month == 3 || pt->month == 5 ||
            pt->month == 7 || pt->month == 8 || pt->month == 10 ||
            pt->month == 12)
            maxday = 31;
        else if (pt->month == 4 || pt->month == 6 ||
                 pt->month == 9 || pt->month == 11)
            maxday = 30;
        else if (pt->month == 2) {
            if (pt->year % 400 == 0 ||
                (pt->year % 4 == 0 && pt->year % 100 != 0))
                maxday = 29;
            else
                maxday = 28;
        } else {
            maxday = 0;
        }

        if (pt->year < 1 || pt->month < 1 || pt->month > 12 ||
            pt->day < 1 || pt->day > maxday)
            printf("Ngay khong hop le! Nhap lai.\n");

    } while (pt->year < 1 || pt->month < 1 || pt->month > 12 ||
             pt->day < 1 || pt->day > maxday);
}

int datecmp(date_t *d1, date_t *d2) {
    if (d1->year < d2->year)
        return -1;
    else if (d1->year > d2->year)
        return 1;
    else if (d1->month < d2->month)
        return -1;
    else if (d1->month > d2->month)
        return 1;
    else if (d1->day < d2->day)
        return -1;
    else if (d1->day > d2->day)
        return 1;
    else
        return 0;
}

int main() {
    date_t test1, test2;
    int result;

    printf("Nhap ngay thu nhat:\n");
    input_date(&test1);

    printf("Nhap ngay thu hai:\n");
    input_date(&test2);

    result = datecmp(&test1, &test2);

    if (result == -1)
        printf("%hhu/%hhu/%d < %hhu/%hhu/%d\n", test1.day, test1.month, test1.year, test2.day, test2.month, test2.year);
    else if (result == 0)
        printf("%hhu/%hhu/%d = %hhu/%hhu/%d\n", test1.day, test1.month, test1.year, test2.day, test2.month, test2.year);
    else
        printf("%hhu/%hhu/%d > %hhu/%hhu/%d\n", test1.day, test1.month, test1.year, test2.day, test2.month, test2.year);

    return 0;
}
