#ifndef CNHANVIEN_H
#define CNHANVIEN_H

#pragma once

class CNhanVien
{
    protected:
        char hoten[31];
        char ngaysinh[11];
        float luong;
        float lcb;

    public:
        virtual void nhap();
        virtual void tinhLuong();
        virtual void xuat();
        virtual float layLuong();
        virtual CNhanVien * timKiem(char []);

};

#endif