#include <stdio.h>

int main() {
    float toan, van, anh, tong_diem, diem_trung_binh;

    // Nhap diem cua 3 m�n
    printf("Nhap diem mon Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem mon Van: ");
    scanf("%f", &van);

    printf("Nhap diem m�n Anh: ");
    scanf("%f", &anh);

    // T�nh tong diem v� diem trung b�nh
    tong_diem = toan + van + anh;
    diem_trung_binh = tong_diem / 3;

    // In ket qua
    printf("Tong diem: %.2f\n", tong_diem);
    printf("diem trung binh: %.2f\n", diem_trung_binh);

    return 0;
}

