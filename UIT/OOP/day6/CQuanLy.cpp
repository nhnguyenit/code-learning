#include "CQuanLy.h"

float CQuanLy::layLuong()
{
    return luong;
}

CNhanVien* CQuanLy::timKiem(char ht[])
{
    if(strcmp(hoten, ht) == 0)
        return this;
    return NULL;
}

void CQuanLy::tinhLuong()
{
    luong = lcb * hscv + thuong;
}

void CQuanLy::nhap()
{
    printf("Nhap ho ten: ");
    scanf("%s", &hoten);
    printf("Nhap ngay sinh: ");
    scanf("%s", &ngaysinh);
    printf("Nhap luong co ban: ");
    scanf("%ld", &lcb);
    printf("Nhap thuong: ");
    scanf("%ld", &thuong);
    printf("Nhap hscv: ");
    scanf("%ld", &hscv);
}

void CQuanLy::xuat()
{
    printf("Ho ten: %s", hoten);
    printf("Ngay sinh: %s", ngaysinh);
    printf("Luong co ban: %ld", lcb);
    printf("Luong thuong: %ld", thuong);
    printf("Luong hscv: %ld", hscv);
    printf("Luong: %ld", luong);
}