#include <stdio.h>

int main() {
    int number;
    printf("Nh?p m?t s? nguyên: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("S? b?n v?a nh?p là s? dýõng\n");
    } else if (number < 0) {
        printf("S? b?n v?a nh?p là s? âm\n");
    } else {
        printf("S? b?n v?a nh?p là s? 0\n");
    }

    return 0;
}
