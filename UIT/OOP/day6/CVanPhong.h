#ifndef CVANPHONG_H
#define CVANPHONG_H
#include "CNhanVien.h"

#pragma once

class CVanPhong: public CNhanVien
{
    protected:
        int snlv;
        float trocap;

    public:
        void nhap();
        void tinhLuong();
        void xuat();
        float layLuong();
        CNhanVien * timKiem(char []);
};

#endif