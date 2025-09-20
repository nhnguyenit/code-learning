#include "CHonSo.h"


CHonSo::CHonSo()
{
    nguyen = 0;
    tu = 0;
    mau = 1;
}

CHonSo::CHonSo(const CHonSo &x)
{
    nguyen = x.nguyen;
    tu = x.tu;
    mau = x.mau;
}

CHonSo::CHonSo(int nguyen, int tu, int mau)
{
    this->nguyen = nguyen;
    this->tu = tu;
    this->mau = mau;
}

CHonSo::~CHonSo()
{
    return;
}

istream& operator>>(istream &is, CHonSo &x)
{
    cout << "Nhap so nguyen: ";
    is >> x.nguyen;
    cout << "Nhap tu: ";
    is >> x.tu;
    cout << "Nhap mau: ";
    is >> x.mau;

    return is;
}

ostream& operator<<(ostream &os, CHonSo &x)
{
    os << "Hon so: " << x.nguyen << " (" << x.tu << "/" << x.mau << ")";

    return os;
}
