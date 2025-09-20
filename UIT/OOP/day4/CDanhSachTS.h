#ifndef CDANHSACHTS_H
#define CDANHSACHTS_H
#include "CThiSinh.h"

#pragma once

class CDanhSachTS
{
    public:
        CDanhSachTS();
        ~CDanhSachTS();
        void nhap();
        void xuat();
        void xuatDSTheoDK();
        void sapXepTheoToan();
        void sapXepTheoVan();
        void sapXepTheoAnh();
        // chon = 1: Toan; chon = 2: Van; chon = 3: Anh
        void sapXep(int &chon);

    private:
        CThiSinh ds[100];
        int n;
};

#endif