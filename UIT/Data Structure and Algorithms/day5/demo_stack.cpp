#include <iostream>

using namespace std;

// Buoc 1: Tao cau truc Node
struct Node
{
    int data;
    Node* pNext;
};

// Buoc 2: Khoi tao Node: input -> value; output -> dia chi node
Node* initNode(int value)
{
    Node* p = new Node;
    p->data = value;
    p->pNext = NULL;

    return p;
}

// Buoc 3: Tao cau truc Stack
struct Stack
{
    Node* pTop;
};

// Buoc 4: Khoi tao Stack
void initStack(Stack &s)
{
    s.pTop = NULL;
}

// Them Node vao Stack
void push(Stack &s, Node* p)
{
    if(s.pTop == NULL)
    {
        s.pTop = p;
    }
    else
    {
        p->pNext = s.pTop;
        s.pTop = p;
    }
}

// In Stack
void printStack(Stack s)
{
    cout << "Stack = pTop<< ";
    for(Node* p = s.pTop; p != NULL; p = p->pNext)
    {
        cout << p->data << "    ";
    }
    cout << ">>" << endl;
}

// Lay ra gia tri tu Stack
void pop(Stack &s)
{
    if(s.pTop == NULL)
        return;

    Node* p = s.pTop;
    s.pTop = s.pTop->pNext;
    delete p;
}

// Lay ra gia tri Top cua Stack
int getValueTop(Stack s)
{
    if(s.pTop != NULL)
        return s.pTop->data;
}

// Chuyen he so thap phan sang he so nhi phan
void convertBinary(Stack &s, int n)
{
    for(int num = n; num != 0; num = num / 2)
    {
        int so_du = num % 2;
        push(s, initNode(so_du));
    }
}


int main()
{
    Stack s;
    initStack(s); // Sau khi khoi tao xong thi chung ta co the goi la Stack rong

    Node* p1 = initNode(10);
    Node* p2 = initNode(79);
    Node* p3 = initNode(39);

    push(s, p1);
    push(s, p2);
    push(s, p3);

    printStack(s);

    cout << "\nTest: " << endl;
    cout << "KT: " << getValueTop(s) << endl;
    pop(s);
    printStack(s);

    cout << "KT: " << getValueTop(s) << endl;
    pop(s);
    printStack(s);
    
    cout << "KT: " << getValueTop(s) << endl;
    pop(s);
    printStack(s);


    cout << "\nGiai quyet y tuong:\n";

    Stack s2;
    initStack(s2);
    int n = 13;

    convertBinary(s2, n);
    printStack(s2);

    return 0;
}