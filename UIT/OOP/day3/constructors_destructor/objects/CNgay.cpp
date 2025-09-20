#include "CNgay.h"


CNgay::CNgay()
{
    ng = 31;
    th = 12;
    nm = 9999;
}

CNgay::CNgay(const CNgay &x)
{
    ng = x.ng;
    th = x.th;
    nm = x.nm;
}

CNgay::CNgay(int ng, int th, int nm)
{
    this->ng = ng;
    this->th = th;
    this->nm = nm;
}

CNgay::~CNgay()
{
    return;
}

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
