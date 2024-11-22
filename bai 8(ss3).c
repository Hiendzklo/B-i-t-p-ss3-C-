#include <stdio.h>

int main() {
    int num, reverse = 0;

    // Nhap so nguy�n c� 4 chu so
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &num);

    // �ao nguoc so
    while (num != 0) {
        reverse = reverse * 10 + num % 10;  // Th�m chu so cuoi v�o so nghich dao
        num /= 10;  // Loai bo chu so cuoi c�ng cua num
    }

    // In ra so nghich dao
    printf("So nghich dao la: %d\n", reverse);

    return 0;
}

