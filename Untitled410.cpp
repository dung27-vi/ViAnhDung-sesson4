#include <stdio.h>

int main() {
    int a, b, c, temp;
    
    // Y�u c?u ng�?i d�ng nh?p 3 s? nguy�n
    printf("Nhap vao 3 so nguyen: ");
    scanf("%d %d %d", &a, &b, &c);

    // S?p x?p c�c s? theo th? t? t�ng d?n
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

    // In k?t qu? ra m�n h?nh
    printf("Thu tu tang dan: %d %d %d\n", a, b, c);

    return 0;
}
