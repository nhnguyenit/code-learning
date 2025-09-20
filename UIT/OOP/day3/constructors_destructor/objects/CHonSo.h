#ifndef CHONSO_H
#define CHONSO_H
#include <iostream>

using namespace std;


class CHonSo
{
    public:
        CHonSo();
        CHonSo(const CHonSo &x);
        CHonSo(int nguyen, int tu, int mau);
        ~CHonSo();
        friend istream& operator>>(istream &is, CHonSo &x);
        friend ostream& operator<<(ostream &os, CHonSo &x);

    private:
        int nguyen;
        int tu;
        int mau;
};

#endif // CHONSO_H
