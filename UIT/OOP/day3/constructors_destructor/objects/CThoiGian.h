#ifndef CTHOIGIAN_H
#define CTHOIGIAN_H
#include <iostream>

using namespace std;


class CThoiGian
{
    private:
        int hh;
        int mm;
        int ss;
    public:
        CThoiGian();
        CThoiGian(const CThoiGian &x);
        CThoiGian(int h, int m, int s);
        ~CThoiGian();
        friend istream& operator>>(istream &is, CThoiGian &x);
        friend ostream& operator<<(ostream &os, CThoiGian &x);
};

#endif // CTHOIGIAN_H
