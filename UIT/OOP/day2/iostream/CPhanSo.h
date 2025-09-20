#ifndef CPHANSO_H
#define CPHANSO_H
#include <iostream>

using namespace std;


class CPhanSo
{
    private:
        int tu;
        int mau;
    public:
        friend istream& operator>>(istream &is, CPhanSo &x);
        friend ostream& operator<<(ostream &os, CPhanSo &x);
};

#endif // CPHANSO_H
