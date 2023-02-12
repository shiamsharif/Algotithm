#include<iostream>
using namespace std;

void bubbleSort(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void printarray(int a[],int n)
{
    for(int i =0; i<n; i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}

int main()
{
    int a[]= {10,-2,3,8,1,18,-5,4,9,-1};
    int n = sizeof(a)/sizeof(a[0]);

    //print given array.
    cout<<"Given Array : ";
    printarray(a,n);

    //bubble sort
    bubbleSort(a,n);
    cout<<"Sorted Array : ";
    printarray(a,n);

    return 0;

}

/*
Time Complexity	:
Best	O(n)
Worst	O(n2)
Average	O(n2)
Space Complexity-> O(1)
Stability: 	Yes


Hence, the number of comparisons is:

(n-1) + (n-2) + (n-3) +.....+ 1 = n(n-1)/2
*/