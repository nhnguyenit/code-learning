#include "CDiemKhongGian.h"

CDiemKhongGian::CDiemKhongGian()
{
    //ctor
}

CDiemKhongGian::~CDiemKhongGian()
{
    //dtor
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
    os << "Diem co toa do: (" << diem.x << ", " << diem.y << ", " <<  diem.z << ")";

    return os;
}
