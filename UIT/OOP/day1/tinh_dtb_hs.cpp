#include <iostream>

using namespace std;


struct HocSinh {
    char hoten[31];
    float toan;
    float van;
    float dtb;
};

typedef struct HocSinh HS;

void nhap(HS &hs);
void xuLy(HS &hs);
void xuat(HS hs);

int main() {
    HS hs;
    nhap(hs);
    xuLy(hs);
    xuat(hs);
    return 0;
}


void nhap(HS &hs) {
    printf("Ho ten: ");
    scanf("%s", &hs.hoten);
    printf("Toan: ");
    scanf("%f", &hs.toan);
    printf("Van: ");
    scanf("%f", &hs.van);
}

void xuLy(HS &hs) {
    hs.dtb = (hs.toan + hs.van) / 2;
}
void xuat(HS hs) {
    cout << "Ho ten: " << hs.hoten << endl;
    cout << "Toan: " << hs.toan << endl;
    cout << "Van: " << hs.van << endl;
    cout << "DTB: " << hs.dtb << endl;
}