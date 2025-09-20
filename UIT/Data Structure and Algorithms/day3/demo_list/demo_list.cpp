#include <iostream>

using namespace std;


// buoc 1: tao cau truc Node
struct Node 
{
    int data;
    Node* pNext;
};

// buoc 2: khoi tao Node
Node* initNode(int val) 
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


// buoc 7: in List
// co 2 cach
// cach 1:
void printList(List ds)
{
    for(Node* p = ds.pHead; p != NULL; p = p->pNext)
    {
        cout << p->data << "\t";
    }
}

// cach 2:
void printWh(List ds)
{
    Node* p = ds.pHead;
    while(p != NULL)
    {
        cout << p->data << "\t";
        p = p->pNext;
    }
}


/*
Yeu cau: Add cac phan tu trong mang vao List co san
Input:
    + ds: List&
    + a: int* (a la dia chi cua Array, tuong ung voi dia chia cua phan tu dau tien)
    + n: int (so phan tu cua mang)
Output:
    + ds: List&
*/
void initList_Array(List &ds, int* a, int n)
{
    for(int i = 0; i < n; i++)
    {
        addHead(ds, initNode(*(a+i)));
    }
}


/*
Yeu cau: Tim gia tri co ton tai trong List hay khong
Input: 
+ ds: danh sach gia tri
+ val: gia tri muon tim trong danh sach
Output: 
+ return true / false
*/
bool timGT(List ds, int val)
{
    for(Node* p = ds.pHead; p != NULL; p = p->pNext)
    {
        if(p->data == val)
        {
            return true;
        }
    }

    return false;
}


/*
Yeu cau: Tim gia tri co ton tai trong List hay khong
Input: 
+ ds: danh sach gia tri
+ val: gia tri muon tim trong danh sach
Output: 
+ tim thay: return dia chi cua Node
+ khong tim thay: return NULL
*/
Node* timGT2(List ds, int val)
{
    for(Node* p = ds.pHead; p != NULL; p = p->pNext)
    {
        if(p->data == val)
        {
            return p;
        }
    }

    return NULL;
}


/*
Yeu cau: Dem cac so chan trong List
Input: 
+ ds: danh sach gia tri
Output: 
+ return so val % 2 == 0 (int type)
*/
int demSoChan(List ds)
{
    int cnt = 0;
    for(Node* p = ds.pHead; p != NULL; p = p->pNext)
    {
        if(p->data % 2 == 0)
        {
            cnt++;
        }
    }
    return cnt;
}


/*
Yeu cau: Tim gia tri nho nhat trong List
Input: 
+ ds: danh sach gia tri
Output: 
+ return gia tri nho nhat (int type)
*/
int timMin(List ds)
{
    int min = ds.pHead->data;
    for(Node* p = ds.pHead->pNext; p != NULL; p = p->pNext)
    {
        if (p->data < min)
        {
            min = p->data;
        }
    }
    return min;
}


/*
Yeu cau: Tim gia tri lon nhat trong List
Input: 
+ ds: danh sach gia tri
Output: 
+ return gia tri lon nhat (int type)
*/
int timMax(List ds)
{
    int max = ds.pHead->data;
    for(Node* p = ds.pHead->pNext; p != NULL; p = p->pNext)
    {
        if (p->data > max)
        {
            max = p->data;
        }
    }
    return max;
}


int main() 
{
    // 10, 79, 39
    Node* p1 = initNode(10);
    Node* p2 = initNode(79);
    Node* p3 = initNode(39);
    cout << "Dia chi: " << p1 << endl;
    cout << "Data: " << p1->data << endl;
    cout << "pNext: " << p1->pNext << endl;


    List ds;
    initList(ds);
    cout << "List's pHead: " << ds.pHead << endl;
    cout << "List's pTail: " << ds.pTail << endl;


    addHead(ds, p1);
    addHead(ds, p2);
    addHead(ds, p3);
    addHead(ds, initNode(66));
    addTail(ds, initNode(90));

    printList(ds); // cach in ds 1
    cout << endl;
    printWh(ds); // cach in ds 2
    cout << endl;

    cout << "9 ton tai trong danh sach? " << timGT(ds, 9) << endl;
    cout << "90 ton tai trong danh sach? " << timGT(ds, 90) << endl;

    cout << "Tim 79 trong danh sach: " << timGT2(ds, 79) << endl;
    cout << "Tim 88 trong danh sach: " << timGT(ds, 88) << endl;


    cout << "Dem so chan co trong danh sach: " << demSoChan(ds) << endl;


    cout << "Tim gia tri nho nhat trong List: " << timMin(ds) << endl;
    cout << "Tim gia tri lon nhat trong List: " << timMax(ds) << endl;


    cout << "Test: Them gia tri tu mang vao List:" << endl;
    int a[] = {89, 67, 32};
    int n = 3;
    initList_Array(ds, a, n);
    printList(ds);
    
    return 0;
}