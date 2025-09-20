#ifndef CSANXUAT_H
#define CSANXUAT_H
#include "CNhanVien.h"

#pragma once

class CSanXuat:public CNhanVien
{
    protected:
        int ssp;
    
    public:
        void nhap();
        void tinhLuong();
        void xuat();
        float layLuong();
        CNhanVien * timKiem(char []);

};

#endif