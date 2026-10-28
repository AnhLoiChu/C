
#include <stdio.h>

typedef struct date {
    unsigned char day;
    unsigned char month;
    int year;
} date_t;

date_t input_date() {
    date_t tmp;
    int maxday;

    do {
        printf("Nhap ngay thang nam: ");
        scanf("%hhu %hhu %d", &tmp.day, &tmp.month, &tmp.year);

        if (tmp.month == 1 || tmp.month == 3 || tmp.month == 5 ||
            tmp.month == 7 || tmp.month == 8 || tmp.month == 10 ||
            tmp.month == 12)
            maxday = 31;
        else if (tmp.month == 4 || tmp.month == 6 ||
                 tmp.month == 9 || tmp.month == 11)
            maxday = 30;
        else if (tmp.month == 2) {
            if (tmp.year % 400 == 0 ||
                (tmp.year % 4 == 0 && tmp.year % 100 != 0))
                maxday = 29;
            else
                maxday = 28;
        } else {
            maxday = 0;
        }

        if (tmp.year < 1 || tmp.month < 1 || tmp.month > 12 ||
            tmp.day < 1 || tmp.day > maxday)
            printf("Ngay khong hop le! Nhap lai.\n");

    } while (tmp.year < 1 || tmp.month < 1 || tmp.month > 12 ||
             tmp.day < 1 || tmp.day > maxday);

    return tmp;
}

int datecmp(date_t d1, date_t d2) {
    if (d1.year < d2.year)
        return -1;
    else if (d1.year > d2.year)
        return 1;
    else if (d1.month < d2.month)
        return -1;
    else if (d1.month > d2.month)
        return 1;
    else if (d1.day < d2.day)
        return -1;
    else if (d1.day > d2.day)
        return 1;
    else
        return 0;
}

int main() {
    date_t test1, test2;
    int result;

    test1 = input_date();
    test2 = input_date();

    result = datecmp(test1, test2);

    if (result == -1)
        printf("%hhu/%hhu/%d < %hhu/%hhu/%d\n",test1.day, test1.month, test1.year,test2.day, test2.month, test2.year);
    else if (result == 0)
        printf("%hhu/%hhu/%d=%hhu/%hhu/%d\n",test1.day, test1.month, test1.year,test2.day, test2.month, test2.year);
    else
        printf("%hhu/%hhu/%d > %hhu/%hhu/%d\n",test1.day, test1.month, test1.year,test2.day, test2.month, test2.year);

    return 0;
}
