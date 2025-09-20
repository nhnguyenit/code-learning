#include "CDanhSachTS.cpp"
#include "CDanhSachTS.h"

int main()
{
    int n = 0;
    CDanhSachTS dsts;
    dsts.nhap();

    dsts.sapXepTheoToan();
    cout << "\nSap Xep theo toan giam dan: \n";
    dsts.xuat();

    dsts.sapXepTheoVan();
    cout << "\nSap Xep theo van giam dan: \n";
    dsts.xuat();

    dsts.sapXepTheoAnh();
    cout << "\nSap Xep theo anh giam dan: \n";
    dsts.xuat();

    cout << "\nNhap lua chon sap xep: 1-toan, 2-van, 3-anh: ";
    cin >> n;
    dsts.sapXep(n);
    cout << "\nSap Xep theo tuy chon theo thu tu giam dan: \n";
    dsts.xuat();

    cout << "\nCac thi sinh co tong diem > 15: \n";
    dsts.xuatDSTheoDK();

    return 0;
}