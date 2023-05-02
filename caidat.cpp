#include "thuvien.h"
void nhap(int &m, int &n) {
    do {
        cout << "Nhap chieu ngang cua mang b[m][]: ";
        cin >> m;
        cout << "Nhap chieu cao cua mang b[][n]: ";
        cin >> n;
    } while (m <= 0 && n <= 0);
    cout << "Mang hai chieu ban vua nhap la: b[" << n << "][" << m << "]" << endl;
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
    cout << "Mang hai chieu ban vua nhap la: " << endl;
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
        cout << b[i][i];
        cout << endl;
    }
}

void cheo_phu(int b[][10], int m) {
    cout << "Cheo phu: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i + j == m - 1) {
                cout << b[i][j];
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void cheo_chinhXphu(int b[][10], int m) {
    cout << "TEST ONLY: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || i + j == m - 1) {
                cout << b[i][j] << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}


void tamgiac_cheochinh_tren(int b[][10], int m) {
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

void tamgiac_cheophu_tren(int b[][10], int m) {
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

void tamgiac_cheochinh_duoi(int b[][10], int m) {
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

void tamgiac_cheophu_duoi(int b[][10], int m) {
    cout << "Tam giac cheo duoi duoi: " << endl;
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

