#include "CDiemKhongGian.h"
#include "CHonSo.h"
#include "CNgay.h"
#include "CPhanSo.h"
#include "CThoiGian.h"
#include "CDiemKhongGian.cpp"
#include "CHonSo.cpp"
#include "CNgay.cpp"
#include "CPhanSo.cpp"
#include "CThoiGian.cpp"


int main()
{
    cout << "1. Khai bao va dinh nghia ham toan tu vao va ham toan tu ra cho Phan so" << endl;
    CPhanSo ps;
    cin >> ps;
    cout << ps << endl;

    cout << "2. Khai bao va dinh nghia ham toan tu vao va ham toan tu ra cho Ngay" << endl;
    CNgay ngay;
    cin >> ngay;
    cout << ngay << endl;

    cout << "3. Khai bao va dinh nghia ham toan tu vao va ham toan tu ra cho Thoi gian" << endl;
    CThoiGian tg;
    cin >> tg;
    cout << tg << endl;

    cout << "4. Khai bao va dinh nghia ham toan tu vao va ham toan tu ra cho Diem khong gian" << endl;
    CDiemKhongGian dkg;
    cin >> dkg;
    cout << dkg << endl;

    cout << "5. Khai bao va dinh nghia ham toan tu vao va ham toan tu ra cho Hon so" << endl;
    CHonSo honso;
    cin >> honso;
    cout << honso << endl;

    return 0;
}
