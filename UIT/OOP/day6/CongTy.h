#ifndef CONGTY_H
#define CONGTY_H
#include "CNhanVien.h"

#pragma once

class CongTy
{
    protected:
        int n;
        CNhanVien *ds[100];

    public:
        void nhap();
        void tinhLuong();
        void xuat();
        float tongLuong();
        CNhanVien * timKiem(char []);
};

#endif