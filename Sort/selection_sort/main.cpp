#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;
}

void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[mini] > a[j])
            {
                mini = j;
            }
        }
        swap(&a[mini], &a[i]);
    }
}

int main()
{
    int a[] = {3, 5, -4, -2, 9, 8, 3, 15, -1, 1, 1};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Given Array : ";
    printArray(a, n);

    selectionSort(a, n);
    cout << "Sorted Array : ";
    printArray(a, n);

    return 0;
}