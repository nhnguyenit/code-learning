#include "CongTy.h"
#include "CongTy.cpp"
#include "CNhanVien.h"
#include "CNhanVien.cpp"
#include "CVanPhong.h"
#include "CVanPhong.cpp"
#include "CQuanLy.h"
#include "CQuanLy.cpp"
#include "CSanXuat.h"
#include "CSanXuat.cpp"

int main()
{
    CongTy cty;
    CVanPhong nvvp;
    CQuanLy quanly;
    CSanXuat nvsx;
    cty.nhap();
    cty.tinhLuong();
    cty.tongLuong;
    cty.timKiem();
    cty.xuat();
    return 0;
}