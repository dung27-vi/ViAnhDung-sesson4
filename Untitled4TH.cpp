#include <stdio.h>
#include <time.h>
#include <string.h>

int main() {
    int namSinh;
    float diemTrungBinh;
    int namHienTai;

    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);

    printf("Nhap diem trung binh: ");
    scanf("%f", &diemTrungBinh);

    time_t t = time(NULL);
    struct tm *tm_info = localtime(&t);
    namHienTai = tm_info->tm_year + 1900;

    if (namSinh <= 1900 || namSinh > namHienTai) {
        printf("Nam sinh khong hop le\n");
        return 1;
    }

    int tuoi = namHienTai - namSinh;
    char hocLuc[20];

    if (diemTrungBinh >= 8.0) {
        strcpy(hocLuc, "Gioi");
    } else if (diemTrungBinh >= 6.5) {
        strcpy(hocLuc, "Kha");
    } else if (diemTrungBinh >= 5.0) {
        strcpy(hocLuc, "Trung binh");
    } else {
        strcpy(hocLuc, "Yeu");
    }

    printf("\nThong tin sinh vien:\n");
    printf("Nam sinh: %d\n", namSinh);
    printf("Tuoi: %d\n", tuoi);
    printf("Hoc luc: %s\n", hocLuc);

    return 0;
}
