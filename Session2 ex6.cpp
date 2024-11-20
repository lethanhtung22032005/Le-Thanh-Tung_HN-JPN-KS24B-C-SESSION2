#include <stdio.h>

int main() {
    // Khai bao hang so PI voi kieu du lieu float
    const float PI = 3.14;

    // Khai bao ban kinh hinh tron
    float banKinh;

    // Nhap ban kinh tu nguoi dung
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &banKinh);

    //  chu vi hinh tron: C = 2 * PI * r
    float chuVi = 2 * PI * banKinh;

    //  dien tich hinh tron: S = PI * r^2
    float dienTich = PI * banKinh * banKinh;

    // Hien thi ket qua
    printf("Chu vi hinh tron: %.2f\n", chuVi);
    printf("Dien tich hinh tron: %.2f\n", dienTich);

    return 0;
}

