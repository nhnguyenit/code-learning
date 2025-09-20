#include <iostream>

using namespace std;

const int size = 8;

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
    Bucket buckets[size];
};

// bước 6: khởi tạo Hashtable (bảng băm)
void initHashTable(HashTable &h)
{
    for(int i = 0; i < size; i++)
    {
        initBucket(h.buckets[i]);
    }
}

int hashFunc(double value)
{
    return abs(value) % size;
}

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
int add(HashTable &h, double value)
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

void printHashTable(HashTable h)
{
    cout << "Hash table ------";
    for(int i = 0; i < size; i++)
    {
        cout << "bucket[" << i << "] = ";
        for(Node* p = h.buckets[i].pHead; p != NULL; p=p->pNext)
        {
            cout << p->data << "    ";
        }
    }
    cout << "-------\n";
}

void initDataHTFromArr(HashTable &h)
{
    // 50 73 35 36 64 28 90 21 53 13
    add(h, initNode(50));
    add(h, 73);
    add(h, initNode(35));
    add(h, 36);
    add(h, initNode(64));
    add(h, 28);
    add(h, initNode(90));
    add(h, 21);
    add(h, initNode(53));
    add(h, 13);
}


void initHashTableFromArray(HashTable* hashTable, double arr[], int n) {
    for (int i = 0; i < n; i++) {
        int result = insert(hashTable, arr[i]);
        if (result == -1) {
            printf("Error inserting %lf\n", arr[i]);
        }
    }
}

int manin()
{
    HashTable h;
    initHashTable(h);
    initDataHT(h);

    printHashTable(h);
    
    return 0;
}