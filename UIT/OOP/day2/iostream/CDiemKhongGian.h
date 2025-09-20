#ifndef CDIEMKHONGGIAN_H
#define CDIEMKHONGGIAN_H
#include <iostream>

using namespace std;


class CDiemKhongGian
{
    public:
        CDiemKhongGian();
        virtual ~CDiemKhongGian();
        friend istream& operator>>(istream &is, CDiemKhongGian &diem);
        friend ostream& operator<<(ostream &os, CDiemKhongGian &diem);

    private:
        float x;
        float y;
        float z;
};

#endif // CDIEMKHONGGIAN_H
