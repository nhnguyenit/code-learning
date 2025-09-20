#include "CDanhSachTS.h"
#include "CThiSinh.cpp"

CDanhSachTS::CDanhSachTS()
{

}

CDanhSachTS::~CDanhSachTS()
{
    return;
}

void CDanhSachTS::nhap()
{
    cout << "Nhap so thi sinh: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> ds[i];
    }
}

void CDanhSachTS::xuat()
{
    cout << "\nDanh sach thi sinh: \n";
    for(int i = 0; i < n; i++)
    {
        cout << ds[i];
        cout << endl;
    }
}

void CDanhSachTS::xuatDSTheoDK()
{
    // in ra cac thi sinh co tong diem > 15
    for(int i = 0; i < n; i++)
    {
        if(ds[i].tongDiem() > 15)
        {
            cout << ds[i];
            cout << endl;
        }
    }
}
void CDanhSachTS::sapXepTheoToan()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(ds[i].getToan() < ds[j].getToan())
            {
                CThiSinh temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

void CDanhSachTS::sapXepTheoVan()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(ds[i].getVan() < ds[j].getVan())
            {
                CThiSinh temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

void CDanhSachTS::sapXepTheoAnh()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(ds[i].getAnh() < ds[j].getAnh())
            {
                CThiSinh temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

// chon = 1: Toan; chon = 2: Van; chon = 3: Anh
void CDanhSachTS::sapXep(int &chon)
{
    if(chon == 1)
    {
        sapXepTheoToan();
    }
    else if (chon == 2)
    {
        sapXepTheoVan();
    }
    else if (chon == 3)
    {
        sapXepTheoAnh();
    }
    else {
        cout << "\nLua chon khong hop le!\n";
    }
}