#include "CDiemKhongGian.h"

CDiemKhongGian::CDiemKhongGian()
{
    x = 0;
    y = 0;
    z = 0;
}

CDiemKhongGian::CDiemKhongGian(const CDiemKhongGian &diem)
{
    x = diem.x;
    y = diem.y;
    z  = diem.z;
}

CDiemKhongGian::CDiemKhongGian(float a, float b, float c)
{
    x = a;
    y = b;
    z = c;
}

CDiemKhongGian::~CDiemKhongGian()
{
    return;
}

istream& operator>>(istream &is, CDiemKhongGian &diem)
{
    cout << "Nhap x: ";
    is >> diem.x;
    cout << "Nhap y: ";
    is >> diem.y;
    cout << "Nhap z: ";
    is >> diem.z;

    return is;
}

ostream& operator<<(ostream &os, CDiemKhongGian &diem)
{
    os << "(" << diem.x << ", " << diem.y << ", " <<  diem.z << ")";

    return os;
}
