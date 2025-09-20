#include <iostream>

using namespace std;

int main()
{
    int x = 36;
    cout << "Gia tri: " << x << endl;

    cout << "Dia chi cua x: " << &x <<endl;

    cout << "Xuat gia tri cua x tu dia chi cua x: " << *(&x) << endl;

    // khai bao kieu con tro (pointer) luu tru dia chi
    int* p = &x;
    cout << p << endl;

    int* p1; // con tro chua khoi tao
    int* p2; // con tro NULL


    int n = 36;
    int* p3 = &n; // bien p3 la bien pointer chua dia chi cua bien n
    

    cout << "Size cua kieu du lieu int: " << sizeof(int) << endl;
    cout << "Size cua bien p3: " << sizeof p3 << endl;
    return 0;
}