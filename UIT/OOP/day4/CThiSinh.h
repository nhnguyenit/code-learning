#ifndef CTHISINH_H
#define CTHISINH_H
#include<iostream>

using namespace std;

#pragma once

class CThiSinh
{
    public:
        CThiSinh();
        CThiSinh(const CThiSinh &x);
        friend istream& operator>>(istream &is, CThiSinh &x);
        friend ostream& operator<<(ostream &os, CThiSinh &x);
        int getToan()
        {
            return toan;
        }
        int getVan()
        {
            return van;
        }
        int getAnh()
        {
            return anh;
        }
        int tongDiem();
        ~CThiSinh();

    private:
        int maThiSinh;
        char ten[51];
        char ngaySinh[11];
        int toan;
        int van;
        int anh;
};

#endif