#include <stdio.h>
#define PI 3.14159  // Ðinh nghia hang so PI

int main() {
    float r, chu_vi, dien_tich;
    // Nhap bán kính cua hinh tron
    printf("Nhap ban kinh hinh tron:");
    scanf("%f", &r);
    // Tính chu vi và dien tích
    chu_vi = 2 * PI * r;
    dien_tich = PI * r * r;
    // In ket qua 
    printf("Chu vi hinh tron la:.2f\n", chu_vi);
    printf("Dien tich hinh tron  la:%.2f\n", dien_tich);

    return 0;
}

