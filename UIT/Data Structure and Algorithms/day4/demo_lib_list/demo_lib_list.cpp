#include <iostream>
#include <forward_list>

using namespace std;


void printList(forward_list<int> ds)
{
    for(int i: ds)
    {
        cout << i << endl;
    }
    cout << endl;
}
int main()
{
    forward_list<int> ds;
    ds.push_front(1);
    ds.push_front(2);
    ds.push_front(3);
    ds.push_front(4);
    // ds.push_back(5);
    ds.insert_after(ds.before_begin(), 5);
    printList(ds);

    ds.pop_front();
    printList(ds);

    return 0;
}