#include "CPhanSo.h"


CPhanSo::CPhanSo()
{
    tu = 0;
    mau = 1;
}

CPhanSo::CPhanSo(const CPhanSo &x)
{
    tu = x.tu;
    mau = x.mau;
}

CPhanSo::CPhanSo(int t, int m)
{
    tu = t;
    mau = m;
}

CPhanSo::~CPhanSo()
{
    return;
}

istream& operator>>(istream &is, CPhanSo &x)
{
    cout << "Nhap tu: ";
    is >> x.tu;
    cout << "Nhap mau: ";
    is >> x.mau;

    return is;
}

ostream& operator<<(ostream &os, CPhanSo &x)
{
    os << x.tu << "/" << x.mau;

    return os;
}
