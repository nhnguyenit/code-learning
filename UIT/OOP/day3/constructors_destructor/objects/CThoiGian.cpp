#include "CThoiGian.h"


CThoiGian::CThoiGian()
{
    hh = 0;
    mm = 0;
    ss = 0;
}

CThoiGian::CThoiGian(const CThoiGian &x)
{
    hh = x.hh;
    mm = x.mm;
    ss = x.ss;
}

CThoiGian::CThoiGian(int h, int m, int s)
{
    hh = h;
    mm = m;
    ss = s;
}

CThoiGian::~CThoiGian()
{
    return;
}

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
