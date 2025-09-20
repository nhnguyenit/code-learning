#include "CSoPhuc.h"

CSoPhuc::CSoPhuc()
{
    thuc = 1.0;
    ao = 1.0;
}

CSoPhuc::CSoPhuc(int t, int a)
{
    thuc = t;
    ao = a;
}

CSoPhuc::~CSoPhuc()
{
    return;
}

CSoPhuc CSoPhuc::operator=(CSoPhuc &x)
{
    thuc = x.thuc;
    ao = x.ao;
    return *this;
}

CSoPhuc CSoPhuc::operator+(CSoPhuc x)
{
    CSoPhuc temp;
    temp.thuc = thuc + x.thuc;
    temp.ao = ao + x.ao;
    return temp;
}

CSoPhuc CSoPhuc::operator-(CSoPhuc x)
{
    CSoPhuc temp;
    temp.thuc = thuc - x.thuc;
    temp.ao = ao - x.ao;
    return temp;
}

CSoPhuc CSoPhuc::operator*(CSoPhuc x)
{
    CSoPhuc temp;
    temp.thuc = thuc * x.thuc;
    temp.ao = ao * x.ao;
    return temp;
}

CSoPhuc CSoPhuc::operator+=(CSoPhuc &x)
{
    thuc = thuc + x.thuc;
    ao = ao + x.ao;
    return *this;    
}

CSoPhuc CSoPhuc::operator-=(CSoPhuc &x)
{
    thuc = thuc - x.thuc;
    ao = ao - x.ao;
    return *this;    
}

CSoPhuc CSoPhuc::operator*=(CSoPhuc &x)
{
    thuc = thuc * x.thuc;
    ao = ao * x.ao;
    return *this;    
}

ostream& operator<<(ostream &os, CSoPhuc &x)
{
    os << "Thuc: " << x.thuc << ", Ao: " << x.ao;

    return os;
}