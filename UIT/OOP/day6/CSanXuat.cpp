#include "CSanXuat.h"
#include <string.h>

float CSanXuat::layLuong()
{
    return luong;
}

CNhanVien* CSanXuat::timKiem(char ht[])
{
    if(strcmp(hoten, ht) == 0)
        return this;
    return NULL;
}

void CSanXuat::tinhLuong()
{
    luong = lcb + ssp * 2000;
}

void CSanXuat::nhap()
{
    printf("Nhap ho ten: ");
    scanf("%s", &hoten);
    printf("Nhap ngay sinh: ");
    scanf("%s", &ngaysinh);
    printf("Nhap luong co ban: ");
    scanf("%ld", &lcb);
    printf("Nhap so san pham: ");
    scanf("%d", &ssp);
}

void CSanXuat::xuat()
{
    printf("Ho ten: %s", hoten);
    printf("Ngay sinh: %s", ngaysinh);
    printf("Luong co ban: %ld", lcb);
    printf("Luong: %ld", luong);
}