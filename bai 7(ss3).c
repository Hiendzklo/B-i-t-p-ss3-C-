#include <stdio.h>

int main() {
    int num, sum = 0;

    // Nhap so nguy�n c� 4 chu so
    printf("Nhap mot so nguy�n c� 4 chu so: ");
    scanf("%d", &num);

    // T�nh tong c�c chu su
    while (num != 0) {
        sum += num % 10;  // Lay chu so cuoi c�ng v� cong v�o tong
        num /= 10;         // Loai bo chu so cuoi c�ng
    }

    // In ket qua
    printf("Tong cac chu sa la: %d\n", sum);

    return 0;
}

