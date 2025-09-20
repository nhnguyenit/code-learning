#ifndef CQUANLY_H
#define CQUANLY_H
#include "CNhanVien.h"

#pragma once

class CQuanLy: public CNhanVien
{
    protected:
        float hscv;
        float thuong;

    public:
        void nhap();
        void tinhLuong();
        void xuat();
        float layLuong();
        CNhanVien * timKiem(char []);
};

#endif