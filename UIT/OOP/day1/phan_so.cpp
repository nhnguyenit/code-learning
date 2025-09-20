#include <iostream>
#include <math.h>

using namespace std;

struct PhanSo {
    int tu;
    int mau;
};
typedef struct PhanSo PS;

void nhap(PS &ps);
void rutGon(PS &ps);
void xuat(PS ps);


int main() {
    PS ps;
    nhap(ps);
    rutGon(ps);
    xuat(ps);
    
    return 0;
};

void nhap(PS &ps) {
    cout << "Nhap tu: ";
    cin >> ps.tu;
    cout << "Nhap mau: ";
    cin >> ps.mau;
};

void rutGon(PS &ps) {
    int a = abs(ps.tu);
    int b = abs(ps.mau);

    while(a * b != 0) {
        if(a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }

    ps.tu = ps.tu / (a + b);
    ps.mau = ps.mau / (a + b);
};

void xuat(PS ps) {
    cout << "Phan so sau rut gon: " << ps.tu << "/" << ps.mau;
};