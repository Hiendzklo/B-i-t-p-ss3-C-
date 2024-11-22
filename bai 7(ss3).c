#include <stdio.h>

int main() {
    int num, sum = 0;

    // Nhap so nguyên có 4 chu so
    printf("Nhap mot so nguyên có 4 chu so: ");
    scanf("%d", &num);

    // Tính tong các chu su
    while (num != 0) {
        sum += num % 10;  // Lay chu so cuoi cùng và cong vào tong
        num /= 10;         // Loai bo chu so cuoi cùng
    }

    // In ket qua
    printf("Tong cac chu sa la: %d\n", sum);

    return 0;
}

