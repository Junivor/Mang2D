#include "thuvien.h"
int main() {
    const int so = 10;
    int a = so;
    int b = so;
    int c[a][10];
    int cot = 0;
    nhap(a, b);
    nhap_mang(c, a, b);
    xuat_mang(c, a, b);
    cheo_chinh(c, a);
    cheo_phu(c, a);
    tamgiac_cheochinh_tren(c, a);
    tamgiac_cheophu_tren(c, a);
    cheo_chinhXphu(c, a);
    tamgiac_cheochinh_duoi(c, a);
    tamgiac_cheophu_duoi(c, a);
}