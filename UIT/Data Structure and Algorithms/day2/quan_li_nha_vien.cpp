#include <iostream>

using namespace std;


struct NhanVien {
    int maNV;
    string hoTen;
    float luongCB;
    int soNg;
    double luongHT;
};
typedef NhanVien NV;

// 1. tao du lieu mang
void initArrNhanVien(NV* arrNV, int &n) {

}

// 2. in cac nhan vien
void printArrNhanVien(NhanVien* arrNV, int n) {

}

int main() {
    NV* arrNV = new NV[50];
    int n = 0;

    cout << "Test: 1. Tao du lieu mang: " << endl;
    initArrNhanVien(arrNV, n);

    cout << "Test: 2. In cac nhan vien: " << endl;
    printArrNhanVien(arrNV, n);
    return 0;
}