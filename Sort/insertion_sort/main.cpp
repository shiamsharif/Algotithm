
//bugggggggggggggggggggggggggggggggggggggggggg

#include <iostream>
using namespace std;

void printArray(int a[], int n)
{
    for(int i =0; i<n ; i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}

void insertionSort(int a[], int n)
{
    for(int i = 1; i<n ;i++)
    {
        int temp1 = a[i];
        int j = n-1;
        while(temp1 < a[j] && j >= 0)
        {
            a[j+1] = a[j];
            --j;
        }

        a[j+1] = temp1;
    }
}

int main()
{
    int a[]={3 , 5 , 9 , 8 , 3 , 15 , 1 , 1};
    int n = sizeof(a)/sizeof(a[0]);
    
    //cout<<n<<endl;
    cout<<"Given Array : ";
    printArray(a,n);

    insertionSort(a,n);
    cout<<"Sorted Array : ";
    printArray(a,n);

    return 0;


}