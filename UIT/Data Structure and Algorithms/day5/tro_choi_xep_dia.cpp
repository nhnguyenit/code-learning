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
};

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
    cout << "STACK = Top<<  ";
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

// Lay so phan tu trong Stack
int getStackSize(Stack s)
{
    int cnt = 0;
    for(Node* p = s.pTop; p != NULL; p = p->pNext)
    {
        cnt++;
    }
    return cnt;
}

// Di chuyen tang
bool moveLayer(Stack &s1, Stack &s2)
{
    int num;
    if (s1.pTop != NULL)
    {
        num = getValueTop(s1);
        if (s2.pTop == NULL || num < s2.pTop->data)
        {
            push(s2, initNode(num));
            pop(s1);
        }
        else{
            return false;
        }
    }
    else
    {
        return false;
    }
    
    return true;
}

// Thuc hien lua chon di chuyen
bool choose(int choice, Stack &a, Stack &b, Stack &c)
{
    bool moved;
    switch (choice)
    {
    case 1:
        moved = moveLayer(a, b);
        break;
    case 2:
        moved = moveLayer(b, a);
        break;
    case 3:
        moved = moveLayer(b, c);
        break;
    case 4:
        moved = moveLayer(c, b);
        break;
    case 5:
        moved = moveLayer(c, a);
        break;
    case 6:
        moved = moveLayer(a, c);
        break;
    default:
        moved = false;
        break;
    }

    return moved;
}

// Khoi tao cac dia trong toa A
void addLayers(Stack &a, int n)
{
    for (int i = n; i > 0; i--)
    {
        push(a, initNode(i));
    }
}

int main()
{   
    // printGame();
    // compareNumbers();
    // Stack a;
    // initStack(a);
    // push(a, initNode(1));
    // push(a, initNode(2));
    // push(a, initNode(3));
    // cout << getStackSize(a);
    int n;
    int choice;
    int cnt = -1;
    bool goodMove;
    cout << "Nhap so tang: ";
    cin >> n;

    Stack a;
    initStack(a);
    Stack b;
    initStack(b);
    Stack c;
    initStack(c);

    addLayers(a, n);

    do
    {
        cout << "============ Game Xep Dia ============" << endl;
        cout << "\t0. Creating Tower" << endl;
        cout << "\t1. A -> B" << endl;
        cout << "\t2. B -> A" << endl;
        cout << "\t3. B -> C" << endl;
        cout << "\t4. C -> B" << endl;
        cout << "\t5. C -> A" << endl;
        cout << "\t6. A -> C" << endl;
        cout << "\t7. All: 6 1 4 6 2 3 6" << endl;
        cout << "======================================" << endl;
        cout << "A Tower" << endl;
        printStack(a);
        cout << "======================================" << endl;
        cout << "B Tower" << endl;
        printStack(b);
        cout << "======================================" << endl;
        cout << "C Tower" << endl;
        printStack(c);
        cout << "======================================" << endl;
        cout << "So lan di chuyen: " << ++cnt << endl;
        cout << "======================================" << endl;
        cout << "Nhap buoc di chuyen tiep theo: ";
        cin >> choice;
        goodMove = choose(choice, a, b, c);
        while (!goodMove)
        {
            cout << "Buoc di chuyen khong hop le, xin hay nhap lai: ";
            cin >> choice;
            goodMove = choose(choice, a, b, c);
        }; 
        
    } while (getStackSize(c) != n);

    cout << "======================================" << endl;
    cout << "A Tower" << endl;
    printStack(a);
    cout << "======================================" << endl;
    cout << "B Tower" << endl;
    printStack(b);
    cout << "======================================" << endl;
    cout << "C Tower" << endl;
    printStack(c);
    cout << "======================================" << endl;
    cout << "So lan di chuyen: " << cnt++ << endl;
    cout << "======================================" << endl;

    cout << "\nBan da chien thang!\n";
    
    return 0;
}