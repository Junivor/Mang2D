#include "thuvien.h"

int main() {
    const int so = 10;
    int a = so;
    int b = so;
    int c[a][10];
    nhap(a, b);
    nhap_mang(c, a, b);
    xuat_mang(c, a, b);
    cheo_chinh(c, a);
    cheo_phu(c, a);
    tamgiac_tren_cheochinh(c, a);
    tamgiac_duoi_cheochinh(c, a);
    tamgiac_tren_cheophu(c, a);
    tamgiac_duoi_cheophu(c, a);
}
