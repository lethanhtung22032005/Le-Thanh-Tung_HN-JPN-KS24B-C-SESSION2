#include <stdio.h>

int main() {
    // Kieu short: Luu tru so nguyen nho hon int, thuong chiem 2 byte.
    short myShort = -32768; // Gia tri toi thieu cua short (-32768).

    // Kieu unsigned short: Luu so nguyen khong dau, thuong chiem 2 byte.
    unsigned short myUnsignedShort = 65535; // Gia tri toi da cua unsigned short (65535).

    // Kieu int: Luu so nguyen, thuong chiem 4 byte.
    int myInt = -2147483648; // Gia tri toi thieu cua int (-2147483648).

    // Kieu unsigned int: Luu so nguyen khong dau, thuong chiem 4 byte.
    unsigned int myUnsignedInt = 4294967295; // Gia tri toi da cua unsigned int (4294967295).

    // Kieu long long: Luu so nguyen lon hon int, thuong chiem 8 byte.
    long long myLongLong = -9223372036854775807LL; // Gia tri toi thieu cua long long.

    // Kieu unsigned long long: Luu so nguyen khong dau lon hon, thuong chiem 8 byte.
    unsigned long long myUnsignedLongLong = 18446744073709551615ULL; // Gia tri toi da cua unsigned long long.

    // Kieu char: Luu ky tu ASCII hoac so nguyen, thuong chiem 1 byte.
    char myChar = 'A'; // Ky tu 'A'.

    // Kieu unsigned char: Luu ky tu hoac gia tri khong am, tu 0 den 255.
    unsigned char myUnsignedChar = 255; // Gia tri toi da cua unsigned char.

    // Kieu float: Luu so thuc, thuong chiem 4 byte.
    float myFloat = 3.14159; // Gia tri gan dung cua pi.

    // Kieu double: Luu so thuc co do chinh xac cao hon float, thuong chiem 8 byte.
    double myDouble = 2.718281828459045; // Gia tri cua hang so e.

    // In gia tri cua cac bien
    printf("short: %d\n", myShort);
    printf("unsigned short: %u\n", myUnsignedShort);
    printf("int: %d\n", myInt);
    printf("unsigned int: %u\n", myUnsignedInt);
    printf("long long: %lld\n", myLongLong);
    printf("unsigned long long: %llu\n", myUnsignedLongLong);
    printf("char: %c\n", myChar);
    printf("unsigned char: %u\n", myUnsignedChar);
    printf("float: %f\n", myFloat);
    printf("double: %lf\n", myDouble);

    return 0;
}

