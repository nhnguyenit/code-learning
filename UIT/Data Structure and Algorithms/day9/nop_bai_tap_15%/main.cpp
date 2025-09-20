#include <iostream>
#include <math.h>

using namespace std;
/*
Họ và tên: Nguyễn Hà Nguyên
Mã SV: 14730050
Mã đề: 03
*/

const int SIZE = 8;

// bước 1: tạo cấu trúc Node
struct Node 
{
    double data;
    Node* pNext;
};

// bước 2: khởi tạo Node
Node* initNode(double val) 
{
    Node* p = new Node;
    p->data = val;
    p->pNext = NULL;

    return p;
};

// bước 3: tạo cấu trúc Bucket
struct Bucket
{
    Node* pHead;
    Node* pTail;
};

// bước 4: khởi tạo Bucket
void initBucket(Bucket &b)
{
    b.pHead = NULL;
    b.pTail = NULL;
}

// bước 5: tạo cấu trúc HashTable (bảng băm)
struct HashTable
{
    Bucket buckets[SIZE];
};

// bước 6: khởi tạo Hashtable (bảng băm)
void initHashTable(HashTable &h)
{
    for(int i = 0; i < SIZE; i++)
    {
        initBucket(h.buckets[i]);
    }
}


/*
Input: 
    + value: giá trị cần chèn vào
Output:
    + vị trí của giá trị theo pp chia lấy dư
*/ 
int hashFunc(double value)
{
    return (int)(fabs(value) * 1000000) % SIZE;
}


/*
Input: 
    + b: bucket
    + p: địa chỉ của Node
Output:
    + sau khi chạy, một Node mới được add vào Bucket
*/
void addTailNodeToBucket(Bucket &b, Node *p)
{
    if(b.pHead == NULL)
    {
        b.pHead = p;
        b.pTail = p;
    }
    else 
    {
        b.pTail->pNext = p;
        b.pTail = p;
    }
}


/*
Câu 1: Viết hàm chèn giá trị cho bảng băm, chèn thành công trả về 1, không thành công trả về -1
Input: 
    + h: bảng băm
    + value: giá trị cần chèn vào
Output:
    + 1: nếu value là số thực được chèn vào bảng băm thành công
    + -1: nếu value là số thực được chèn vào bảng băm thất bại
*/ 
int addVal(HashTable &h, double value)
{
    // bước 1: gọi hàm hashFunc để xác định vị trí
    int vi_tri = hashFunc(value);

    Node* newNode = initNode(value);
    if (newNode == NULL) {
        return -1;
    }
    // bước 2: thêm node tail vào Bucket với giá trị số thực
    addTailNodeToBucket(h.buckets[vi_tri], newNode);
    return 1;
}


/*
Câu 2: Viết hàm khởi tạo giá trị cho bảng băm từ mảng 1 chiều
Input: 
    + h: bảng băm
    + arr[]: mảng 1 chiều gồm các số thực cần chèn vào bảng băm
Output:
    + sau khi chạy, các số thực trong mảng 1 chiều được chèn vào bảng băm
*/ 
void initDataHTFromArr(HashTable &h, double arr[])
{
    int result;
    for (int i = 0; i < SIZE; i++) 
    {
        result = addVal(h, arr[i]);
        if(result == -1)
            continue;
    }
}


/*
Câu 3: Viết hàm in ra các giá trị của bảng băm
Input: 
    + h: bảng băm
Output:
    + sau khi chạy, in ra các hàm của bảng băm
*/ 
void printHashTable(HashTable h)
{
    cout << "Hash table ------";
    for(int i = 0; i < SIZE; i++)
    {
        cout << "bucket[" << i << "] = ";
        for(Node* p = h.buckets[i].pHead; p != NULL; p=p->pNext)
        {
            cout << p->data << "    ";
        }
    }
    cout << "-------\n";
}


/*
Câu 4: Viết hàm đếm các bucket không rỗng trong bảng băm
Input: 
    + h: bảng băm
Output:
    + số bucket không rỗng trong bảng băm
*/ 
int countNoneEmptyBucket(HashTable &h) {
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (h.buckets[i].pHead != NULL) {
            count++;
        }
    }
    
    return count;
}


int main()
{
    HashTable h;

    // Câu 2: Test khởi tạo bảng băm với mảng 1 chiều
    cout << "Test cau 2: khoi tao bang bam bang mang 1 chieu" << endl;
    double a[] = {3.14, 5.67, 1.23, 9.87, 2.56, 7.89, 1.23, 3.33};
    initDataHTFromArr(h, a);
    printHashTable(h);
    
    return 0;
}