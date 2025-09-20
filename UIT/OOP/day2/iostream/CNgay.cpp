#include "CNgay.h"


istream& operator>>(istream &is, CNgay &x)
{
    cout << "Nhap ngay: ";
    is >> x.ng;
    cout << "Nhap thang: ";
    is >> x.th;
    cout << "Nhap nam: ";
    is >> x.nm;

    return is;
}

ostream& operator<<(ostream &os, CNgay &x)
{
    os << "Ngay " << x.ng << "/" << x.th << "/" << x.nm;

    return os;
}
