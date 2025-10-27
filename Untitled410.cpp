#include <stdio.h>

int main() {
    int a, b, c, temp;
    
    // Yêu c?u ngý?i dùng nh?p 3 s? nguyên
    printf("Nhap vao 3 so nguyen: ");
    scanf("%d %d %d", &a, &b, &c);

    // S?p x?p các s? theo th? t? tãng d?n
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    // In k?t qu? ra màn h?nh
    printf("Thu tu tang dan: %d %d %d\n", a, b, c);

    return 0;
}
