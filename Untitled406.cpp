#include <stdio.h>

int main() {
    int chiSoCu, chiSoMoi;
    int soDienTieuThu;
    long long tienDien = 0;

    printf("Nhap chi so dien thang dau: ");
    scanf("%d", &chiSoCu);
    printf("Nhap chi so dien thang cuoi: ");
    scanf("%d", &chiSoMoi);

    soDienTieuThu = chiSoMoi - chiSoCu;

    if (soDienTieuThu < 50) {
        tienDien = soDienTieuThu * 10000;
    } else if (soDienTieuThu < 100) {
        tienDien = 50 * 10000 + (soDienTieuThu - 50) * 15000;
    } else if (soDienTieuThu < 150) {
        tienDien = 50 * 10000 + 50 * 15000 + (soDienTieuThu - 100) * 20000;
    } else if (soDienTieuThu < 200) {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDienTieuThu - 150) * 25000;
    } else {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDienTieuThu - 200) * 30000;
    }

    printf("So kWh tieu thu: %d\n", soDienTieuThu);
    printf("So tien dien phai tra: %lld VND\n", tienDien);

    return 0;
}
