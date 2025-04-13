#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  // malloc, free
#include <string.h>

typedef struct {
    char ten[30];
    int tuoi;
    int gioi_tinh; // 1: nam, 0: nu
    float diem_toan;
    float diem_van;
    float diem_tb;
    int xep_loai;
} hocsinh_t;
typedef enum
{
	GIOI = 1,
	KHA,
	TRUNG_BINH,
	YEU
} xep_loai_t;
typedef enum
{
	NU,
	NAM
} gioi_tinh_t;
static void nhap_thongtin(hocsinh_t* hocsinh) {
    printf("Nhap ten: ");
    scanf(" %[^\n]", hocsinh->ten);

    printf("Nhap tuoi: ");
    scanf("%d", &hocsinh->tuoi);

    printf("Nhap gioi tinh (0: Nu, 1: Nam): ");
    scanf("%d", &hocsinh->gioi_tinh);

    printf("Nhap diem toan: ");
    scanf("%f", &hocsinh->diem_toan);

    printf("Nhap diem van: ");
    scanf("%f", &hocsinh->diem_van);

    hocsinh->diem_tb = (hocsinh->diem_toan + hocsinh->diem_van) / 2;

    if (hocsinh->diem_tb >= 8) {
        hocsinh->xep_loai = GIOI;
    }
    else if (hocsinh->diem_tb >= 6.5) {
        hocsinh->xep_loai = KHA;
    }
    else if (hocsinh->diem_tb >= 5) {
        hocsinh->xep_loai = TRUNG_BINH;
    }
    else {
        hocsinh->xep_loai = YEU;
    }
}


static void in_thongtin(const hocsinh_t* hs, int stt) {
    printf("\n--- Hoc sinh %d ---\n", stt + 1);
    printf("Ten: %s\n", hs->ten);
    printf("Tuoi: %d\n", hs->tuoi);
    printf("Gioi tinh: %s\n", hs->gioi_tinh == NAM ? "Nam" : "Nu");
    printf("Diem toan: %.2f\n", hs->diem_toan);
    printf("Diem van: %.2f\n", hs->diem_van);
    printf("Diem trung binh: %.2f\n", hs->diem_tb);
    switch (hs->xep_loai) {
    case GIOI:
        printf("Xep loai: Gioi\n");
        break;
    case KHA:
        printf("Xep loai: Kha\n");
        break;
    case TRUNG_BINH:
        printf("Xep loai: Trung binh\n");
        break;
    case YEU:
        printf("Xep loai: Yeu\n");
        break;
    default:
        break;
    }
}

int main() {
    int n;
    printf("Nhap so luong hoc sinh: ");
    scanf("%d", &n);

    // Cấp phát động bộ nhớ cho n học sinh
    hocsinh_t* danh_sach = (hocsinh_t*)malloc(n * sizeof(hocsinh_t));
    if (danh_sach == NULL) {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }

    // Nhập thông tin cho từng học sinh
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin hoc sinh %d:\n", i + 1);
        nhap_thongtin(&danh_sach[i]);
    }

    // In thông tin
    for (int i = 0; i < n; i++) {
        in_thongtin(&danh_sach[i], i);
    }

    // Giải phóng bộ nhớ
    free(danh_sach);
    return 0;
}
