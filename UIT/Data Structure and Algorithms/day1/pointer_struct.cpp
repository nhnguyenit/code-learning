#include <iostream>

using namespace std;

// struct la xay dung kieu du lieu moi dua tren nhung kieu du lieu co ban
struct ToaDo {
    int x;
    int y;
};

typedef ToaDo Diem; // tao nickname Diem cho ToaDo


// hoac co the:
/*
typedef ToaDo {
    int x;
    int y;
} Diem;
*/ 

// tao hao de in ra toa do
void inToaDo(ToaDo a) {
    cout << "(" << a.x << "; " << a.y << ")" << endl;
}


void inToaDo2(ToaDo* p) {
    cout << "(" << p->x << "; " << p->y << ")" << endl;
}

int main() {
    ToaDo a = {3, 4};
    inToaDo(a);

    ToaDo* p = &a;
    cout << "Dia chi cua bien ToaDo a: " << p << endl;

    Diem b = {5, 6};
    inToaDo(b);


    // cap phat dong cho kieu ToaDo
    ToaDo* p1 = new ToaDo;
    (*p1).x = 6;
    (*p1).y = 7;
    inToaDo(*p1);


    // cach gan 2
    ToaDo* p2 = new ToaDo;
    p2->x = 9;
    p2->y = 10;
    // input bien, in gia tri toa do
    inToaDo(*p2);
    // input dia chi, in gia tri toa do
    inToaDo2(p2);


    // cach gan 3
    ToaDo *p3 = new ToaDo({11, 12});
    inToaDo2(p3);

    return 0;
}