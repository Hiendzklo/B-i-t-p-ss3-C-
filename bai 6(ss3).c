#include <stdio.h>

int main() {
    float b, h, dien_tich;

    // Nhap v�o do d�i d�y v� chieu cao cua tam gi�c
    printf("Nhap do dai day cua tam giac: ");
    scanf("%f", &b);  // Nhap do dai day

    printf("Nhap chieu cao cua tam giac:");
    scanf("%f", &h);  // Nhap chieu cao

    // Tinh dien tich cua tam giac
    dien_tich = (b * h) / 2;

    // In ket qua
    printf("Dien tich cua tam giac la: %.2f\n", dien_tich);

    return 0;
}

