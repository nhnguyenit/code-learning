#include <iostream>

using namespace std;


// Cau 1. Xay dung cau truc du lieu SinhVien
struct SinhVien
{
    int maSV;
    char hoTen[100];
    float diemTB;
    string xepLoai;
};

typedef SinhVien SV;


// Cau 2. Xay dung cau truc Node va Linked List
struct Node 
{
    SinhVien data;
    Node* pNext;
};

struct List
{
    Node* pHead;
    Node* pTail;
};


// Cau 3. Viet ham khoi tao Node va Linked List
Node* initNode(SinhVien val) 
{
    Node* p = new Node;
    p->data = val;
    p->pNext = NULL;

    return p;
}

void initList(List &ds)
{
    ds.pHead = NULL;
    ds.pTail = NULL;
}


// Cau 4. Viet ham them sinh vien vao dau danh sach
void addHead(List &ds, Node* p)
{
    if(ds.pTail == NULL)
    {
        ds.pHead = p;
        ds.pTail = p;
    }
    else
    {
        p->pNext = ds.pHead;
        ds.pHead = p;
    }
}


//  Cau 5. Viet ham them sinh vien vao cuoi danh sach
void addTail(List &ds, Node* p)
{
    if(ds.pHead == NULL)
    {
        ds.pHead = p;
        ds.pTail = p;       
    }
    else
    {
        ds.pTail->pNext = p;
        ds.pTail = p;
    }
}


// Cau 6. Viet ham khoi tao du lieu cho danh sach sinh vien
bool initDataListSV(List &ds)
{
    SinhVien sv1 = {123, "Nguyen Van A", 9.1, "Xuat Sac"};
    SinhVien sv2 = {124, "Nguyen Van B", 8.8, "Gioi"};
    SinhVien sv3 = {125, "Nguyen Van C", 9.1, "Xuat Sac"};
    SinhVien sv4 = {126, "Nguyen Van D", 2.1, "Yeu"};
    SinhVien sv5 = {127, "Nguyen Van E", 9.7, "Xuat Sac"};
    SinhVien sv6 = {128, "Nguyen Van F", 4.1, "Yeu"};
    SinhVien sv7 = {129, "Nguyen Van G", 8.3, "Gioi"};
    SinhVien sv8 = {130, "Nguyen Van H", 7.9, "Gioi"};
    // printSV(sv1);

    Node* p1 = initNode(sv1);
    // printSV(p1->data);

    addHead(ds, p1);
    addHead(ds, initNode(sv2));
    addHead(ds, initNode(sv3));
    addHead(ds, initNode(sv4));
    addTail(ds, initNode(sv5));
    addTail(ds, initNode(sv6));
    addTail(ds, initNode(sv7));
    addTail(ds, initNode(sv8));

    return true;
}


// Cau 7. Viet ham in danh sach sinh vien
// Ham in thong tin sinh vien
void printSV(SinhVien sv)
{
    printf("|%3d| %12s| %3.1f| %8s|\n", sv.maSV, sv.hoTen, sv.diemTB, sv.xepLoai.c_str());
}

// Ham in danh sach sinh vien, goi ham printSV
void printListFor(List ds)
{
    for(Node* p = ds.pHead; p != NULL; p = p->pNext)
    {
        printSV(p->data);
    }
}


// Cau 8. Viet ham tim DTB cao nhat
/*
Input:
    + ds: List
Output:
    + DTB: float
*/
float timDTBCaoNhat(List ds)
{
    if(ds.pHead == NULL)
        return -1;

    float max = ds.pHead->data.diemTB;
    for(Node* p = ds.pHead->pNext; p != NULL; p = p->pNext)
    {
        if(p->data.diemTB > max)
            max = p->data.diemTB;
    }
    return max;
}


// Cau 9. Viet ham tim kiem sinh vien theo ma SV
/*
Input:
    + ds: List
    + maSV: int
Output:
    + true or false: bool
*/
bool timSVTheoMaSV(List ds, int maSV)
{
    for(Node* p = ds.pHead; p != NULL; p = p->pNext)
    {
        if(maSV == p->data.maSV)
            return true;
    }
    return false;
}


// Cau 10. Viet ham tim SV co DTB cao nhat
/*
Input:
    + ds: List
Output:
    + sv: SinhVien
*/
SV timSVCoDTBCaoNhat(List ds)
{
    float max = timDTBCaoNhat(ds);
    for(Node* p = ds.pHead; p != NULL; p = p->pNext)
    {
        if(max == p->data.diemTB)
            return p->data;
    }
}
// Cau 11. Viet ham tim SV co DTB thap nhat
/*
Input:
    + ds: List
Output:
    + sv: SinhVien
*/
SV timSVCoDTBThapNhat(List ds)
{
    float min = 10;
    SV sv;
    for(Node* p = ds.pHead; p != NULL; p = p->pNext)
    {
        if(p->data.diemTB < min)
        {
            min = p->data.diemTB;
            sv = p->data;
        }
    }
    return sv;
}

int main() 
{
    List ds;
    initList(ds);

    cout << "Test: Cau 1 - 6: Khoi tao cac struct SinhVien, Node, List, va cac ham khoi tao Dia chi, Data, add Head, add Tail: " << initDataListSV(ds) << endl;
    cout << endl;

    cout << "Test: Cau 7. Viet ham in danh sach sinh vien: " << endl;
    printListFor(ds);
    cout << endl;

    cout << "Test: Cau 8. Viet ham tim DTB cao nhat (9.7): " << timDTBCaoNhat(ds) << endl;
    cout << endl;

    cout << "Test: Cau 9. Viet ham tim kiem sinh vien theo ma SV (1): " << timSVTheoMaSV(ds, 125) << endl;
    cout << "Test: Cau 9. Viet ham tim kiem sinh vien theo ma SV (0): " << timSVTheoMaSV(ds, 133) << endl;
    cout << endl;

    cout << "Test: Cau 10. Viet ham tim SV co DTB cao nhat (|127| Nguyen Van E| 9.7| Xuat Sac|):" << endl;
    printSV(timSVCoDTBCaoNhat(ds));
    cout << endl;

    cout << "Test: Cau 11. Viet ham tim SV co DTB thap nhat (|126| Nguyen Van D| 2.1|      Yeu|):" << endl;
    printSV(timSVCoDTBThapNhat(ds));
    cout << endl;

    return 0;
}