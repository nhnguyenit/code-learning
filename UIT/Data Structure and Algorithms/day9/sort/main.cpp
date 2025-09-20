#include <iostream>
#include <time.h>

using namespace std;

const int SIZE = 100000;

void initArr100k(float a[], int &n)
{
    n = 100000;
    for(int i = 0; i < n; i++)
    {
        a[i] = rand() + rand() % 1000/1000.0;
    }
}


void printArr(float a[], int n)
{
    cout << "\nIn mang: \n";
    for(int i= n-1000; i < n; i++)
    {
        cout << a[i] << endl;
    }
}


void selectionSort(float a[], int n)
{
    int m;
    for(int i = 0; i < n-1; i++)
    {
        m = i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j] < a[m])
                m = j;
        }
        if(m != i)
            swap(a[i], a[m]);
    }
}


double timeSelectionSort(float a[], int n)
{
    clock_t start, end;
    start = clock();
    selectionSort(a, n);
    end = clock();

    return (double)(end - start)/CLOCKS_PER_SEC;
}


int main()
{
    srand(42);

    float a[SIZE];
    int n = 0;


    initArr100k(a, n);

    double t = timeSelectionSort(a, n);
    printArr(a, n);
    cout << "Time: " << t << endl;
    return 0;
}