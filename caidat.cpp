#include "thuvien.h"
void nhap(int &m, int &n) {
    do {
        cout << "Nhap chieu dai mang b[m][]: ";
        cin >> m;
        cout << "Nhap chieu cao mang b[][n]: ";
        cin >> n;
    } while (m <= 0 && n <= 0);
    cout << "Do dai va chieu cao mang ban vua nhap la: b[" << m << "][" << n << "]" << endl;
}

void nhap_mang(int b[][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Nhap b[" << i + 1 << "][" << j + 1 << "]" << endl;
            cin >> b[i][j];
        }
    }
}

void xuat_mang(int b[][10], int m, int n) {
    cout << "Mang ban vua nhap co du lieu la: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

void cheo_chinh(int b[][10], int m) {
    cout << "Cheo chinh: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j) {
                cout << b[i][j] << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void cheo_phu(int b[][10], int m) {
    cout << "Cheo phu: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i + j == m - 1) {
                cout << b[i][j] << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void tamgiac_tren_cheochinh(int b[][10], int m) {
    cout << "Tam giac cheo chinh tren: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i <= j) {
                cout << b[i][j] << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void tamgiac_duoi_cheochinh(int b[][10], int m) {
    cout << "Tam giac cheo chinh duoi: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i >= j) {
                cout << b[i][j] << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void tamgiac_tren_cheophu(int b[][10], int m) {
    cout << "Tam giac cheo phu tren: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i + j <= m - 1) {
                cout << b[i][j] << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void tamgiac_duoi_cheophu(int b[][10], int m) {
    cout << "Tam giac cheo phu duoi: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i + j >= m - 1) {
                cout << b[i][j] << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}