#include <iostream>
#include <stack>

using namespace std;

// buoc 1: Tao cau truc Node
struct Node
{
    int data;
    Node* pLeft;
    Node* pRight;
};

// buoc 2: Khoi tao Node tu 1 gia tri
Node* initNode(int value)
{
    Node* p = new Node;

    p->data = value;
    p->pLeft = NULL;
    p->pRight = NULL;

    return p;
}

// buoc 3: tao cau truc Tree
struct Tree
{
    Node* pRoot;
};

// buoc 4: khoi tao Tree
void initTree(Tree& t)
{
    t.pRoot = NULL;
}

void addNode(Tree& t, Node* p)
{
    // buoc1: Neu Tree empty thi p gan vao pRoot
    if(t.pRoot == NULL)
    {
        t.pRoot = p;
        return;
    }

    // buoc 2: Tree khong empty -> di tim Node thich hop de link vao
    Node* pGoto = t.pRoot;
    Node* pLoca = NULL;

    // buoc 2.1: Tim dia chi Node thich hop de link vao
    while(pGoto != NULL)
    {
        if(p->data < pGoto->data)
            pGoto=pGoto->pLeft;
        else if(p->data > pGoto->data)
            pGoto=pGoto->pRight;
    }

    // buoc 2.2: Link p vao pLoca
    if(p->data < pLoca->data)
        pLoca->pLeft = p;
    else if (p->data > pLoca->data)
        pLoca->pRight = p;

    //
}

void inOrder(Tree t)
{
    stack<Node*> s;
    Node* p = t.pRoot;

    while(p != NULL || s.empty() == false)
    {
        while(p != NULL)
        {
            s.push(p);
            p=p->pLeft;
        }

        p = s.top();
        s.pop();
        cout << p->data << " ";

        p=p->pRight;
    }
}

void LNR(Node* p)
{
    if(p != NULL)
    {
        LNR(p->pLeft);
        cout << p->data << " ";
        LNR(p->pRight);
    }
}

void initDataTree(Tree& t)
{
        //50 26 73
    Node* p1 = initNode(50);
    Node* p2 = initNode(26);
    Node* p3 = initNode(73);
    addNode(t, p1);
    addNode(t, p2);
    addNode(t, p3);
}

bool searchValueTree(Tree t, int value)
{
    Node* p = t.pRoot;

    while(p != NULL)
    {
        if(value == p->data)
            return true;
        if(value < p->data)
            p=p->pLeft;
        else if(value > p->data)
            p=p->pRight;
    }

    return false;
}

/*Tinh tong cac gia tri
Input:
    + t: Tree

Output:
    + return t
*/
int sumValueTree(Tree t)
{
    stack<Node*> s;
    Node* p = t.pRoot;

    while(p != NULL || s.empty() == false)
    {
        while(p != NULL)
        {
            s.push(p);
            p=p->pLeft;
        }

        p = s.top();
        s.pop();
        cout << p->data << " ";

        // 
        t += p->data;
        p=p->pRight;
    }

    return t;
}

int main()
{
    Tree t;
    initTree(t); // t empty
    initDataTree(t);

    LNR(t.pRoot);
    cout << "Test: Tim 10 (0): " << searchValueTree(10);
    cout << "Test: Tim 73 (1): " << searchValueTree(73);
    inOrder(t);

    cout << endl;

    cout << "Test: Sum () = " << sumValueTree(t) << endl;

    return 0;
}