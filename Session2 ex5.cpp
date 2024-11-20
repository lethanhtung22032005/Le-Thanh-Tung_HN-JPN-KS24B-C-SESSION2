#include <stdio.h>
int main() {
    // Khai báo các bi?n chi?u dài và chi?u r?ng
    int length = 10; // Chi?u dài c?a hình ch? nh?t
    int width = 3;   // Chi?u r?ng c?a hình ch? nh?t

    // Tính chu vi và di?n tích c?a hình ch? nh?t
    int perimeter = 2 * (length + width);
    int area = length * width;

    // Hi?n th? k?t qu?
    printf("Chieu dai cua hinh chu nhat la: %d\n", length);
    printf("Chieu rong cua hinh chu nhat la: %d\n", width);
    printf("Chu vi cua hinh chu nhat la: %d\n", perimeter);
    printf("Dien tich cua hinh chu nhat la: %d\n", area);

    return 0;
}
