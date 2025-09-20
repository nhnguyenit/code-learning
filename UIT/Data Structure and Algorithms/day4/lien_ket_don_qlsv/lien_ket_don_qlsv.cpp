#include <iostream>

using namespace std;


struct SinhVien
{
    int maSV;
    char hoTen[100];
    float diemTB;
    string xepLoai;
};

typedef SinhVien SV;

void printSV(SinhVien sv)
{
    printf("|%6d| %15s| %f3.1| %10s|\n", sv.maSV, sv.hoTen, sv.diemTB, sv.xepLoai.c_str());
}

// buoc 1: tao cau truc Node
struct Node 
{
    SinhVien data;
    Node* pNext;
};

// buoc 2: khoi tao Node
Node* initNode(SinhVien val) 
{
    Node* p = new Node;
    p->data = val;
    p->pNext = NULL;

    return p;
};

// buoc 3: tao cau truc List
struct List
{
    Node* pHead;
    Node* pTail;
};

// buoc 4: khoi tao List
void initList(List &ds)
{
    ds.pHead = NULL;
    ds.pTail = NULL;
}

// buoc 5: tao ham addHead
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

// buoc 6: tao ham addTail
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

// Cau 7. In ds sinh vien
void printListFor(List ds)
{
    for(Node* p = ds.pHead; p != NULL; p = p->pNext)
    {
        printSV(p->data);
    }
}

// Cau 7. Tao ds sinh vien
bool initDataListSV(List &ds)
{
    SinhVien sv1 = {123, "Nguyen Van A", 9.1, "Gioi"};
    SinhVien sv2 = {124, "Nguyen Van B", 8.8, ""};
    SinhVien sv3 = {125, "Nguyen Van C", 9.1, ""};
    SinhVien sv4 = {126, "Nguyen Van D", 2.1, ""};
    SinhVien sv5 = {127, "Nguyen Van E", 9.7, ""};
    SinhVien sv6 = {128, "Nguyen Van F", 4.1, ""};
    SinhVien sv7 = {129, "Nguyen Van G", 8.3, ""};
    SinhVien sv8 = {130, "Nguyen Van H", 7.9, ""};
    // printSV(sv1);

    Node* p1 = initNode(sv1);
    // printSV(p1->data);

    addHead(ds, p1);
    addHead(ds, initNode(sv2));
    addHead(ds, initNode(sv3));
    addHead(ds, initNode(sv4));
    addHead(ds, initNode(sv5));
    addHead(ds, initNode(sv6));
    addHead(ds, initNode(sv7));
    addHead(ds, initNode(sv8));

    return true;
}

/*
Cau 8. Viet ham cap nhat xep loai hoc luc
Input:
    + ds: List
Output:
    +  ds: List&
*/
void capNhatXepLoai(List &ds)
{
    for(Node* p = ds.pHead; p != NULL; p = p->pNext)
    {
        if(p->data.diemTB >= 9)
            p->data.xepLoai = "Xuat Sac";
        if(p->data.diemTB >= 8 && p->data.diemTB < 9)
            p->data.xepLoai = "Gioi";
        if(p->data.diemTB >= 6.5 && p->data.diemTB < 8)
            p->data.xepLoai = "Kha";
        if(p->data.diemTB >= 5 && p->data.diemTB < 6.5)
            p->data.xepLoai = "Trung Binh";
        if(p->data.diemTB < 5)
            p->data.xepLoai = "Yeu";
    }
}

int main()
{
    List ds;
    initList(ds);

    cout << "Test: Cau 6. Khoi tao ds sinh vien: " << initDataListSV(ds) << endl;

    cout << "Test: Cau 7. In ds sinh vien: " << endl;
    printListFor(ds);

    cout << "Test: Cau 8. Cap nhat xep loai sv: " << endl;
    capNhatXepLoai(ds);
    printListFor(ds);


    return 0;
}