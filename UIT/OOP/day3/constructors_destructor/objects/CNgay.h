#ifndef CNGAY_H
#define CNGAY_H
#include <iostream>

using namespace std;


class CNgay
{
    private:
        int ng;
        int th;
        int nm;
    public:
        CNgay();
        CNgay(const CNgay &x);
        CNgay(int ng, int th, int nm);
        ~CNgay();
        friend istream& operator>>(istream &is, CNgay &x);
        friend ostream& operator<<(ostream &os, CNgay &x);
};

#endif // CNGAY_H
