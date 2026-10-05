#include <stdio.h>
#include <stdlib.h>

// Khai báo các hàm
int menu();
void tinh_tien_phong_khach_san();
void huong_dan();

int main() {
    int tuy_chon = 0;

    // Vòng lặp giữ menu chạy liên tục cho đến khi chọn 0 để thoát
    do {
        tuy_chon = menu();
        switch (tuy_chon) {
            case 1:
                tinh_tien_phong_khach_san();
                break;
            case 2:
                huong_dan();
                break;
            case 0:
                printf("\nCam on ban da su dung ung dung!\n");
                break;
            default:
                printf("\nTuy chon khong hop le! Vui long chon lai.\n");
                break;
        }

        if (tuy_chon != 0) {
            printf("\nNhan Enter de tiep tuc...");
            fflush(stdin);
            getchar(); // Dừng màn hình xem kết quả
            system("cls"); // Xóa màn hình
        }
    } while (tuy_chon != 0);

    return 0;
}

// Hàm hiển thị Menu lựa chọn
int menu() {
    int tuy_chon = 0;
    printf("==========================================\n");
    printf("     HE THONG QUAN LY KHANH SAN - MENU    \n");
    printf("==========================================\n");
    printf("1. Tinh tien phong khach san\n");
    printf("2. Xem bang gia & Quy dinh giam gia\n");
    printf("0. Thoat ung dung\n");
    printf("------------------------------------------\n");
    printf("Nhap tuy chon cua ban: ");
    scanf("%d", &tuy_chon);
    system("cls");
    return tuy_chon;
}

// Hàm giải quyết Bài toán Giá phòng khách sạn
void tinh_tien_phong_khach_san() {
    int loai_phong, so_ngay, loai_ngay;
    float don_gia = 0, thanh_tien = 0, giam_gia = 0, tong_cong = 0;

    printf("--- TINH TIEN PHONG KHACH SAN ---\n");
    printf("Chon loai phong:\n");
    printf("  1. Standard (STD)  - 500.000 VND/dem\n");
    printf("  2. Superior (SUP)  - 800.000 VND/dem\n");
    printf("  3. Deluxe (DLX)    - 1.200.000 VND/dem\n");
    printf("  4. Suite (SUT)     - 2.000.000 VND/dem\n");
    printf("Nhap loai phong (1-4): ");
    scanf("%d", &loai_phong);

    // Xác định đơn giá gốc theo loại phòng bằng switch-case
    switch (loai_phong) {
        case 1: don_gia = 500000; break;
        case 2: don_gia = 800000; break;
        case 3: don_gia = 1200000; break;
        case 4: don_gia = 2000000; break;
        default:
            printf("\nLoai phong khong hop le!\n");
            return;
    }

    printf("Nhap so ngay luu tru: ");
    scanf("%d", &so_ngay);
    if (so_ngay <= 0) {
        printf("\nSo ngay o khong hop le!\n");
        return;
    }

    printf("Chon thoi diem thue (1: Ngay thuong | 2: Ngay le/Cuoi tuan (+20%%)): ");
    scanf("%d", &loai_ngay);

    // Xử lý phụ thu ngày lễ bằng if-else
    if (loai_ngay == 2) {
        don_gia = don_gia * 1.2; // Phụ thu 20%
    } else if (loai_ngay != 1) {
        printf("\nLoai ngay khong hop le!\n");
        return;
    }

    // Tính thành tiền
    thanh_tien = don_gia * so_ngay;

    // Giảm giá 10% nếu ở từ 4 ngày trở lên bằng lệnh điều kiện if
    if (so_ngay >= 4) {
        giam_gia = thanh_tien * 0.10;
    }

    tong_cong = thanh_tien - giam_gia;

    // In hóa đơn thanh toán
    printf("\n================ HOADON ================\n");
    printf("Don gia ap dung:       %12.0f VND/dem\n", don_gia);
    printf("So ngay o:             %12d dem\n", so_ngay);
    printf("Thanh tien:            %12.0f VND\n", thanh_tien);
    printf("Giam gia (10%% >= 4ngay):%12.0f VND\n", giam_gia);
    printf("----------------------------------------\n");
    printf("TONG TIEN THANH TOAN:  %12.0f VND\n", tong_cong);
    printf("========================================\n");
}

// Hàm hiển thị thông tin hướng dẫn
void huong_dan() {
    printf("--- QUY DINH GIA PHONG & UUDAI ---\n");
    printf("1. Phu thu 20%% vao cac ngay Le / Tet / Cuoi tuan.\n");
    printf("2. Giam ngay 10%% tren tong hoa don khi dat phong tu 4 dem tro len.\n");
}
