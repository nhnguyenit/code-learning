#include <iostream>

using namespace std;

int main() 
{
    int* p = new int; //cap phat dong
    cout << "Dia chi p = " << p << endl;

    *p = 20; // truy cap vao dia chi vung nho luu o bien p va gan gia tri = 20

    cout << p << endl;
    cout <<*p << endl;

    if(p == NULL) { // neu khong du vung nho thi p return NULL
        cout << "Cap phat khong thanh cong" << endl;
    }



    // cap phat dong va khoi tao gia tri
    int* p1 = new int(6789);
    cout << p1 << endl; // in ra dia chi
    cout << *p1 << endl; // in ra gia tri duoc luu trong dia chi

    return 0;
}