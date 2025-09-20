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

// buoc 3: tao cau truc Queue
struct Queue
{
    Node* pFront;
    Node* pRear;
};

// buoc 4: khoi tao Queue
void initQueue(Queue &q)
{
    q.pFront = NULL;
    q.pRear = NULL;
}

// buoc 5: tao ham enqueue
void enQueue(Queue &q, Node* p)
{
    if(q.pFront == NULL)
    {
        q.pFront = p;
        q.pRear = p;       
    }
    else
    {
        q.pRear->pNext = p;
        q.pRear = p;
    }
}

// buoc 6: tao ham dequeue
void deQueue(Queue &q)
{
    if(q.pFront == NULL)
    {
        return;
    }
    Node* p = q.pFront;
    q.pFront = q.pFront->pNext;
    delete p;

    if(q.pFront == NULL)
    {
        q.pRear == NULL;
    }
}

// In Queue
void printQueue(Queue q)
{
    cout << "Queue = Front<<    ";
    for(Node* p = q.pFront; p != NULL; p = p->pNext)
    {
        cout << p->data << "    ";
    }
    cout <<">>Rear\n\n";
}


int main()
{
    Queue q;
    initQueue(q);

    enQueue(q, initNode(10));
    enQueue(q, initNode(39));
    enQueue(q, initNode(79));

    printQueue(q);


    cout << "\nTest deQueue:\n";
    cout <<"\nGia tri o pFront se bi dequeue: " << q.pFront->data << endl;
    deQueue(q);
    cout << "Queue sau khi dequeue:\n";
    printQueue(q);
    
    return 0;
}