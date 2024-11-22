#include <stdio.h>

int main() {
    char name[100];  

    printf("Nhap tên cua ban: ");
    fgets(name, sizeof(name), stdin);  
    printf("Xin chào, %s!\n", name);

    return 0;
}

