#include <stdio.h>

int main() {
    int ngay, thang, nam;
    int max_ngay;

    printf("Nhap ngay, thang, nam: ");
    scanf("%d %d %d", &ngay, &thang, &nam);

    int la_nam_nhuan = (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);

    switch (thang) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            max_ngay = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            max_ngay = 30;
            break;
        case 2:
            max_ngay = la_nam_nhuan ? 29 : 28;
            break;
        default:
            max_ngay = -1;
            break;
    }

    if (thang >= 1 && thang <= 12 && ngay >= 1 && ngay <= max_ngay) {
        printf("Ngay thang nam hop le\n");
    } else {
        printf("Ngay thang nam khong hop le\n");
    }

    return 0;
}
