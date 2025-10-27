#include <stdio.h>

int main() {
    int so_1, so_2, so_3;

    printf("Nhap so thu nhat: ");
    scanf("%d", &so_1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so_2);
    printf("Nhap so thu ba: ");
    scanf("%d", &so_3);

    if ((so_3 >= so_1 && so_3 <= so_2) || (so_3 >= so_2 && so_3 <= so_1)) {
        printf("So thu 3 nam trong khoang giua so 1 va so 2.\n");
    } else {
        printf("So thu 3 khong nam trong khoang giua so 1 va so 2.\n");
    }

    return 0;
}
