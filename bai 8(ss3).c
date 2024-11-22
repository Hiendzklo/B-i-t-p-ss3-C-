#include <stdio.h>

int main() {
    int num, reverse = 0;

    // Nhap so nguyên có 4 chu so
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &num);

    // Ðao nguoc so
    while (num != 0) {
        reverse = reverse * 10 + num % 10;  // Thêm chu so cuoi vào so nghich dao
        num /= 10;  // Loai bo chu so cuoi cùng cua num
    }

    // In ra so nghich dao
    printf("So nghich dao la: %d\n", reverse);

    return 0;
}

