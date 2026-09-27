#include <stdio.h>

int main() {
    char mon1[20], mon2[20];
    int tin1, tin2, tongsotin;
    float diem1, diem2, GPA;


    printf("Nhap Mon 1 (Ten_mon So_tin_chi Diem): ");
    scanf("%s %d %f", mon1, &tin1, &diem1);

    printf("Nhap Mon 2 (Ten_mon So_tin_chi Diem): ");
    scanf("%s %d %f", mon2, &tin2, &diem2);

    tongsotin = tin1 + tin2;
    GPA = (diem1 * tin1 + diem2 * tin2) / tongsotin;

    printf("%s %s %s\n", "Mon hoc", "So tin", "Diem ");
    printf("%s %d %f\n", mon1, tin1, diem1);
    printf("%s %d %f\n", mon2, tin2, diem2);
    printf("     %d %.2f\n", tongsotin, GPA);
    return 0;
}
