#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class KhoaHoc {
public:
    string ma, ten;
    int tinChi;
    float hocPhi;

    void nhap() {
        cout << "Ma: ";
        cin >> ma;
        cin.ignore();

        cout << "Ten: ";
        getline(cin, ten);

        cout << "Tin chi: ";
        cin >> tinChi;

        cout << "Hoc phi: ";
        cin >> hocPhi;
    }

    void xuat() {
        cout << ma << " | " << ten << " | "
             << tinChi << " | " << hocPhi << endl;
    }
};

// Hi?n th?
void hienThi(vector<KhoaHoc> ds) {
    for (int i = 0; i < ds.size(); i++) {
        ds[i].xuat();
    }
}

// Thêm
void them(vector<KhoaHoc> &ds) {
    KhoaHoc kh;
    kh.nhap();
    ds.push_back(kh);
}

// Xóa theo mã
void xoa(vector<KhoaHoc> &ds) {
    string ma;
    cout << "Nhap ma can xoa: ";
    cin >> ma;

    for (int i = 0; i < ds.size(); i++) {
        if (ds[i].ma == ma) {
            ds.erase(ds.begin() + i);
            cout << "Da xoa!\n";
            return;
        }
    }
    cout << "Khong tim thay!\n";
}

// C?p nh?t
void capNhat(vector<KhoaHoc> &ds) {
    string ma;
    cout << "Nhap ma can sua: ";
    cin >> ma;

    for (int i = 0; i < ds.size(); i++) {
        if (ds[i].ma == ma) {
            ds[i].nhap();
            cout << "Da cap nhat!\n";
            return;
        }
    }
    cout << "Khong tim thay!\n";
}

// Tìm theo h?c phí
void tim(vector<KhoaHoc> ds) {
    float hp;
    cout << "Nhap hoc phi: ";
    cin >> hp;

    for (int i = 0; i < ds.size(); i++) {
        if (ds[i].hocPhi == hp) {
            ds[i].xuat();
        }
    }
}

// S?p x?p
bool cmp(KhoaHoc a, KhoaHoc b) {
    if (a.hocPhi == b.hocPhi)
        return a.ten < b.ten;
    return a.hocPhi < b.hocPhi;
}

void sapXep(vector<KhoaHoc> &ds) {
    sort(ds.begin(), ds.end(), cmp);
    cout << "Da sap xep!\n";
}

// Menu
int main() {
    vector<KhoaHoc> ds;
    int choice;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Them\n";
        cout << "2. Hien thi\n";
        cout << "3. Cap nhat\n";
        cout << "4. Xoa\n";
        cout << "5. Tim theo hoc phi\n";
        cout << "6. Sap xep\n";
        cout << "0. Thoat\n";
        cout << "Chon: ";
        cin >> choice;

        switch (choice) {
            case 1: them(ds); break;
            case 2: hienThi(ds); break;
            case 3: capNhat(ds); break;
            case 4: xoa(ds); break;
            case 5: tim(ds); break;
            case 6: sapXep(ds); break;
        }

    } while (choice != 0);

    return 0;
}
