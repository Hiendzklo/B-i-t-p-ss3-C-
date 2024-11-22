#include <stdio.h>

int main() {
    // Thông tin tung sinh viên
    int stt1 = 1; char hoTen1[] = "Nguyen Van A"; int tuoi1 = 20; char soDienThoai1[] = "0904488481"; char email1[] = "anv@rikkeiacademy.com";
    int stt2 = 2; char hoTen2[] = "Nguyen Van B"; int tuoi2 = 21; char soDienThoai2[] = "0904488482"; char email2[] = "bnv@rikkeiacademy.com";
    int stt3 = 3; char hoTen3[] = "Nguyen Van C"; int tuoi3 = 18; char soDienThoai3[] = "0904488483"; char email3[] = "cnv@rikkeiacademy.com";
    int stt4 = 4; char hoTen4[] = "Nguyen Van D"; int tuoi4 = 19; char soDienThoai4[] = "0904488484"; char email4[] = "dnv@rikkeiacademy.com";
    int stt5 = 5; char hoTen5[] = "Nguyen Van E"; int tuoi5 = 22; char soDienThoai5[] = "0904488485"; char email5[] = "env@rikkeiacademy.com";
    int stt6 = 6; char hoTen6[] = "Nguyen Van F"; int tuoi6 = 21; char soDienThoai6[] = "0904488486"; char email6[] = "fnv@rikkeiacademy.com";
    int stt7 = 7; char hoTen7[] = "Nguyen Van G"; int tuoi7 = 23; char soDienThoai7[] = "0904488487"; char email7[] = "gnv@rikkeiacademy.com";
    int stt8 = 8; char hoTen8[] = "Nguyen Van H"; int tuoi8 = 19; char soDienThoai8[] = "0904488488"; char email8[] = "hnv@rikkeiacademy.com";
    int stt9 = 9; char hoTen9[] = "Nguyen Van I"; int tuoi9 = 18; char soDienThoai9[] = "0904488489"; char email9[] = "inv@rikkeiacademy.com";
    int stt10 = 10; char hoTen10[] = "Nguyen Van K"; int tuoi10 = 21; char soDienThoai10[] = "0904488480"; char email10[] = "knv@rikkeiacademy.com";

    // In thông tin tung sinh viên
    printf("--------------------------------------------------------------------------------\n");
    printf("| %-3s | %-20s | %-4s | %-15s | %-30s |\n", "STT", "Ho va ten", "Tuoi", "So dien thoai", "Email");
    printf("--------------------------------------------------------------------------------\n");

    printf("| %-3d | %-20s | %-4d | %-15s | %-30s |\n", stt1, hoTen1, tuoi1, soDienThoai1, email1);
    printf("| %-3d | %-20s | %-4d | %-15s | %-30s |\n", stt2, hoTen2, tuoi2, soDienThoai2, email2);
    printf("| %-3d | %-20s | %-4d | %-15s | %-30s |\n", stt3, hoTen3, tuoi3, soDienThoai3, email3);
    printf("| %-3d | %-20s | %-4d | %-15s | %-30s |\n", stt4, hoTen4, tuoi4, soDienThoai4, email4);
    printf("| %-3d | %-20s | %-4d | %-15s | %-30s |\n", stt5, hoTen5, tuoi5, soDienThoai5, email5);
    printf("| %-3d | %-20s | %-4d | %-15s | %-30s |\n", stt6, hoTen6, tuoi6, soDienThoai6, email6);
    printf("| %-3d | %-20s | %-4d | %-15s | %-30s |\n", stt7, hoTen7, tuoi7, soDienThoai7, email7);
    printf("| %-3d | %-20s | %-4d | %-15s | %-30s |\n", stt8, hoTen8, tuoi8, soDienThoai8, email8);
    printf("| %-3d | %-20s | %-4d | %-15s | %-30s |\n", stt9, hoTen9, tuoi9, soDienThoai9, email9);
    printf("| %-3d | %-20s | %-4d | %-15s | %-30s |\n", stt10, hoTen10, tuoi10, soDienThoai10, email10);
    printf("--------------------------------------------------------------------------------\n");

    return 0;
}

