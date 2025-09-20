#include ".\objects\CDiemKhongGian.h"
#include ".\objects\CHonSo.h"
#include ".\objects\CNgay.h"
#include ".\objects\CPhanSo.h"
#include ".\objects\CThoiGian.h"
#include ".\objects\CDiemKhongGian.cpp"
#include ".\objects\CHonSo.cpp"
#include ".\objects\CNgay.cpp"
#include ".\objects\CPhanSo.cpp"
#include ".\objects\CThoiGian.cpp"


int main()
{
    cout << "NOTICE: Em dung VSC nen cach #include hoi khac xiu nha thay!" << endl;

    cout << "1. Phan so: Test constructors & destructor" << endl;
    CPhanSo ps1;
    CPhanSo ps2(ps1);
    CPhanSo ps3(10, 3);
    cout << "Phan so 1: " << ps1 << endl;
    cout << "Phan so 2 (copy tu phan so 1): " << ps2 << endl;
    cout << "Phan so 3 truyen tham so: " << ps3 << endl;
    cout << endl;

    cout << "2. Ngay: Test constructors & destructor" << endl;
    CNgay ngay1;
    CNgay ngay2(ngay1);
    CNgay ngay3(10, 3, 2024);
    cout << "Ngay 1: " << ngay1 << endl;
    cout << "Ngay 2 (copy tu Ngay 1): " << ngay2 << endl;
    cout << "Ngay 3 truyen tham so: " << ngay3 << endl;
    cout << endl;

    cout << "3. Thoi gian: Test constructors & destructor" << endl;
    CThoiGian tg1;
    CThoiGian tg2(tg1);
    CThoiGian tg3(11, 11, 11);
    cout << "Thoi gian 1: " << tg1 << endl;
    cout << "Thoi gian 2 (copy tu Thoi gian 1): " << tg2 << endl;
    cout << "Thoi gian 3 truyen tham so: " << tg3 << endl;
    cout << endl;

    cout << "4. Diem khong gian: Test constructors & destructor" << endl;
    CDiemKhongGian dkg1;
    CDiemKhongGian dkg2(dkg1);
    CDiemKhongGian dkg3(1.18, 7.43, 9);
    cout << "Diem khong gian 1: " << dkg1 << endl;
    cout << "Diem khong gian 2 (copy tu Diem khong gian 1): " << dkg2 << endl;
    cout << "Diem khong gian 3 truyen tham so: " << dkg3 << endl;
    cout << endl;

    cout << "5. Hon so: Test constructors & destructor" << endl;
    CHonSo honso1;
    CHonSo honso2(honso1);
    CHonSo honso3(2, 3, 4);
    cout << "Hon so 1: " << honso1 << endl;
    cout << "Hon so 2 (copy tu Hon so 1): " << honso2 << endl;
    cout << "Hon so 3 truyen tham so: " << honso3 << endl;
    cout << endl;

    cout << "NOTICE: Em dung VSC nen cach #include hoi khac xiu nha thay!" << endl;
    
    return 0;
}
