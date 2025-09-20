#include <iostream>

using namespace std;


void khoiTaoGiaTri(int* a, int &n) {
    *a = 56; // gan gia tri 56 cho dia chi cua element 0
    *(a + 1) = 67;
    *(a + 2) = 35;
    *(a + 3) = 90;
    *(a + 4) = 12;
    *(a + 5) = 39;
    n = 6;
}

void inMang(int* a, int n) {
    for (int i = 0; i < n; i++) {
    cout << *(a+i) << endl;
    }   
};

int main() {
    int* a = new int[50];
    int n = 0;


    khoiTaoGiaTri(a, n);
    inMang(a, n);

    return 0;
}