#include <iostream>

using namespace std;

int main() {
    int* p = new int(6789);

    *p = 345;


    cout << "Truoc thu hoi: " << p << endl;
    cout << "Gia tri truoc thu hoi: " << *p << endl;

    delete p; // thu hoi vung nho p
    p = NULL; // sau khi thu hoi vung nho, gan dia chi = NULL de tranh lac con tro

    cout << "Sau thu hoi: " << p << endl;
    //cout << "Gia tri sau thu hoi: " << *p << endl; // => co che lac con tro pointer

    return 0;
}