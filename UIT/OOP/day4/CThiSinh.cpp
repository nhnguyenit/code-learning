#include "CThiSinh.h"
#include<string.h>

CThiSinh::CThiSinh()
{
    maThiSinh = 0;
    strcpy(ten, "");
    strcpy(ngaySinh, "1/1/1");
    toan = 0;
    van = 0;
    anh = 0;
}

CThiSinh::~CThiSinh()
{
    return;
}

CThiSinh::CThiSinh(const CThiSinh &x)
{
    maThiSinh = x.maThiSinh;
    strcpy(ten, x.ten);
    strcpy(ngaySinh, x.ngaySinh);
    toan = x.toan;
    van = x.van;
    anh = x.anh;

}

istream& operator>>(istream &is, CThiSinh &x)
{
    cout << "Ma thi sinh: ";
    is >> x.maThiSinh;

    cout << "Ten thi sinh: ";
    is >> x.ten;
    gets(x.ten);
    fflush(stdin);

    cout << "Ngay sinh: ";
    gets(x.ngaySinh);
    fflush(stdin);

    cout << "Toan: ";
    is >> x.toan;

    cout << "Van: ";
    is >> x.van;

    cout << "Anh: ";
    is >> x.anh;

    return is;
}

ostream& operator<<(ostream &os, CThiSinh &x)
{
    os << "\nMa: " << x.maThiSinh;
    os << "\nTen thi sinh: " << x.ten;
    os << "\nNgay sinh: " << x.ngaySinh;
    os << "\nToan: " << x.toan;
    os << "\nVan: " << x.van;
    os << "\nAnh: " << x.anh;

    return os;
}

int CThiSinh::tongDiem()
{
    return toan + van + anh;
}