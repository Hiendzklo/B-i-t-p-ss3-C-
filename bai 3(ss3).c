#include <stdio.h>
#define PI 3.14159  // �inh nghia hang so PI

int main() {
    float r, chu_vi, dien_tich;
    // Nhap b�n k�nh cua hinh tron
    printf("Nhap ban kinh hinh tron:");
    scanf("%f", &r);
    // T�nh chu vi v� dien t�ch
    chu_vi = 2 * PI * r;
    dien_tich = PI * r * r;
    // In ket qua 
    printf("Chu vi hinh tron la:.2f\n", chu_vi);
    printf("Dien tich hinh tron  la:%.2f\n", dien_tich);

    return 0;
}

