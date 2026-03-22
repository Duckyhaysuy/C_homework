#include <stdio.h>
#include <string.h>

struct SinhVien {
    char maSV[20];
    char hoTen[50];
    float diemTB;
};

void nhap(struct SinhVien sv[], int *n) {
    printf("Nhap so SV: ");
    scanf("%d", n);
    getchar();

    for (int i = 0; i < *n; i++) {
        printf("\nSV %d:\n", i + 1);

        printf("Ma SV: ");
        fgets(sv[i].maSV, sizeof(sv[i].maSV), stdin);

        printf("Ho ten: ");
        fgets(sv[i].hoTen, sizeof(sv[i].hoTen), stdin);

        printf("Diem TB: ");
        scanf("%f", &sv[i].diemTB);
        getchar();
    }
}

void xuat(struct SinhVien sv[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nMa: %s", sv[i].maSV);
        printf("Ten: %s", sv[i].hoTen);
        printf("Diem: %.2f\n", sv[i].diemTB);
    }
}

void maxDiem(struct SinhVien sv[], int n) {
    int index = 0;

    for (int i = 1; i < n; i++) {
        if (sv[i].diemTB > sv[index].diemTB) {
            index = i;
        }
    }

    printf("\nSV diem cao nhat:\n");
    printf("%s%s%.2f\n", sv[index].maSV, sv[index].hoTen, sv[index].diemTB);
}

void diem7(struct SinhVien sv[], int n) {
    printf("\nSV diem >= 7:\n");

    for (int i = 0; i < n; i++) {
        if (sv[i].diemTB >= 7) {
            printf("%s%s%.2f\n", sv[i].maSV, sv[i].hoTen, sv[i].diemTB);
        }
    }
}

int main() {
    struct SinhVien sv[100];
    int n;

    nhap(sv, &n);
    xuat(sv, n);
    maxDiem(sv, n);
    diem7(sv, n);

    return 0;
}






#include <iostream>
#include <vector>
using namespace std;

struct SinhVien {
    string maSV;
    string hoTen;
    float diemTB;
};

// Nh?p danh sách
void nhap(vector<SinhVien> &ds, int &n) {
    cout << "Nhap so SV: ";
    cin >> n;
    cin.ignore();

    ds.resize(n);

    for (int i = 0; i < n; i++) {
        cout << "\nSV " << i + 1 << ":\n";

        cout << "Ma SV: ";
        getline(cin, ds[i].maSV);

        cout << "Ho ten: ";
        getline(cin, ds[i].hoTen);

        cout << "Diem TB: ";
        cin >> ds[i].diemTB;
        cin.ignore();
    }
}

// Hi?n th?
void xuat(vector<SinhVien> ds) {
    for (int i = 0; i < ds.size(); i++) {
        cout << ds[i].maSV << " | "
             << ds[i].hoTen << " | "
             << ds[i].diemTB << endl;
    }
}

// Tìm SV di?m cao nh?t
void maxDiem(vector<SinhVien> ds) {
    int index = 0;

    for (int i = 1; i < ds.size(); i++) {
        if (ds[i].diemTB > ds[index].diemTB) {
            index = i;
        }
    }

    cout << "\nSV diem cao nhat:\n";
    cout << ds[index].maSV << " | "
         << ds[index].hoTen << " | "
         << ds[index].diemTB << endl;
}

// In SV >= 7
void diem7(vector<SinhVien> ds) {
    cout << "\nSV diem >= 7:\n";

    for (int i = 0; i < ds.size(); i++) {
        if (ds[i].diemTB >= 7) {
            cout << ds[i].maSV << " | "
                 << ds[i].hoTen << " | "
                 << ds[i].diemTB << endl;
        }
    }
}

int main() {
    vector<SinhVien> ds;
    int n;

    nhap(ds, n);
    xuat(ds);
    maxDiem(ds);
    diem7(ds);

    return 0;
}
