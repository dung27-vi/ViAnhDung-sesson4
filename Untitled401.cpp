#include <stdio.h>

int main() {
    int number;
    printf("Nh?p m?t s? nguy�n: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("S? b?n v?a nh?p l� s? d��ng\n");
    } else if (number < 0) {
        printf("S? b?n v?a nh?p l� s? �m\n");
    } else {
        printf("S? b?n v?a nh?p l� s? 0\n");
    }

    return 0;
}
