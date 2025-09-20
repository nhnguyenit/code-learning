#include "CVanPhong.h"

float CVanPhong::layLuong()
{
    return luong;
}

CNhanVien* CVanPhong::timKiem(char ht[])
{
    if(strcmp(hoten, ht) == 0)
        return this;
    return NULL;
}

void CVanPhong:: tinhLuong()
{
    luong = lcb + sblv * 100000 + trocap;
}

void CVanPhong::nhap()
{
    printf("Nhap ho ten: ");
    scanf("%s", &hoten);
    printf("Nhap ngay sinh: ");
    scanf("%s", &ngaysinh);
    printf("Nhap luong co ban: ");
    scanf("%ld", &lcb);
    printf("Nhap sblv: ");
    scanf("%ld", &sblv);
    printf("Nhap trocap: ");
    scanf("%ld", &trocap);
}

void CVanPhong::xuat()
{
    printf("Ho ten: %s", hoten);
    printf("Ngay sinh: %s", ngaysinh);
    printf("Luong co ban: %ld", lcb);
    printf("Luong sblv: %ld", sblv);
    printf("Luong trocap: %ld", trocap);
    printf("Luong: %ld", luong);
}