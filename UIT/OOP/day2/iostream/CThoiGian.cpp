#include "CThoiGian.h"


istream& operator>>(istream &is, CThoiGian &x)
{
    cout << "Nhap gio: ";
    is >> x.hh;
    cout << "Nhap phut: ";
    is >> x.mm;
    cout << "Nhap giay: ";
    is >> x.ss;

    return is;
}

ostream& operator<<(ostream &os, CThoiGian &x)
{
    os << "Thoi gian: " << x.hh << "h:" << x.mm << "m:" << x.ss << "s";

    return os;
}
