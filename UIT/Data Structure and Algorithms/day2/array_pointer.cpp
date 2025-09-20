#include <iostream>

using namespace std;

void inMang(int* a, int n) {
    for (int i = 0; i < n; i++) {
    cout << *(a+i) << endl;
    }   
};

int main() {
    int a[50] = {1, 9, 5, 7, 9, 2, 8, 5};
    int n = 8;

    cout << a << endl; // dia chi cua mang tuong ung voi dia chi cua element dau tien

    inMang(a, n);


    return 0;
}