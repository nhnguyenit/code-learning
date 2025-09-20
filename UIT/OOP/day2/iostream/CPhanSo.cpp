#include "CPhanSo.h"


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
    os << "Phan so: " << x.tu << "/" << x.mau;

    return os;
}
