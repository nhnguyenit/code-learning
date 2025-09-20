#include "CNhanVien.h"

float CNhanVien::layLuong()
{
    return luong;
}

CNhanVien* CNhanVien::timKiem(char ht[])
{
    if(strcmp(hoten, ht) == 0)
        return this;
    return NULL;
}

void CNhanVien::tinhLuong()
{
    return;
}

void CNhanVien::nhap()
{
    return;
}

void CNhanVien::xuat()
{
    return;
}