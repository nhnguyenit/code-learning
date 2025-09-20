#include "CongTy.h"
#include "CNhanVien.h"
#include "CQuanLy.h"
#include "CSanXuat.h"
#include "CVanPhong.h"

CNhanVien* CongTy::timKiem(char ht[])
{
    for(int i=0; i<n; i++)
    {
        CNhanVien *kq;
        kq = ds[i]->timKiem(ht);
        if(kq != NULL)
            return kq;
    }

    return NULL;
}

float CongTy::tongLuong()
{
    float s = 0;
    for(int i=0; i<n;i++)
        s = s + ds[i]->layLuong();
    return s;
}

void CongTy::tinhLuong()
{
    for(int i=0; i<n;i++)
        ds[i]->tinhLuong();
}

void CongTy::nhap()
{
    printf("Nhap so nhan vien: ");
    scanf("%d", &n);
    int loainv;
    for(int i=0; i<n; i++)
    {
        printf("Chon loai nhan vien: 0. Quan ly, 1. NVVP, 2. NVSX");
        scanf("%d", &loainv);
        switch(loainv)
        {
            case 0: ds[i] = new CQuanLy;
                break;
            case 1: ds[i] = new CVanPhong;
                break;
            case 2: ds[i] = new CSanXuat;
                break;
        }
        ds[i]->nhap();
    }
}

void CongTy::xuat()
{
    for(int i=0; i<n; i++)
    {
        ds[i]->xuat();
    }
}