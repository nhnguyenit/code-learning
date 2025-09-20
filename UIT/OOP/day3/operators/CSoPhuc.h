#ifndef CSOPHUC_H
#define CSOPHUC_H
#include <iostream>

#pragma once

using namespace std;


class CSoPhuc
{
public:
    CSoPhuc();
    CSoPhuc(int t, int a);
    ~CSoPhuc();
     
    CSoPhuc operator=(CSoPhuc &x);
    CSoPhuc operator+(CSoPhuc x);
    CSoPhuc operator-(CSoPhuc x);
    CSoPhuc operator*(CSoPhuc x);
    CSoPhuc operator+=(CSoPhuc &x);
    CSoPhuc operator-=(CSoPhuc &x);
    CSoPhuc operator*=(CSoPhuc &x);

    friend ostream& operator<<(ostream &os, CSoPhuc &x);

private:
    float thuc;
    float ao;

};

#endif