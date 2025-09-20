#include "CHonSo.h"

CHonSo::CHonSo()
{
    //ctor
}

CHonSo::~CHonSo()
{
    //dtor
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
    os << "Hon so: " << x.nguyen << " " << x.tu << "/" << x.mau;

    return os;
}
