#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int age;
    float grade;
};

// Hàm nhập dữ liệu cho struct sử dụng con trỏ (theo yêu cầu cuối đề bài)
void inputStudent(struct Student *s) {
    printf("Nhap ten: ");
    scanf(" %s", s->name);
    printf("Nhap tuoi: ");
    scanf("%d", &(s->age));
    printf("Nhap diem: ");
    scanf("%f", &(s->grade));
}

int main() {
    struct Student sv1 = {"Loi", 23, 6.1};
    struct Student sv2;
    sv2 = sv1;

    strcpy(sv2.name, "An");
    sv2.age = 20;

    printf("Thong tin sv1: %s - %d - %.1f\n", sv1.name, sv1.age, sv1.grade);
    printf("Thong tin sv2: %s - %d - %.1f\n", sv2.name, sv2.age, sv2.grade);

    struct Student *pSV = &sv1;

    strcpy(pSV->name, "LOINEW");
    pSV->age = 25;

    printf("Thong tin sv1 sau khi sua qua con tro: %s - %d - %.1f\n", pSV->name, pSV->age, pSV->grade);

    return 0;
}
