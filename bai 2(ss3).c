#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Nhap nhiet do Celsius
    printf("Nhap nhiet do (Celsius): ");
    scanf("%f", &celsius);  // Nhan gia tri kieu float
    // Chuyen doi Celsius sang Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;
    // In ket qua
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}

