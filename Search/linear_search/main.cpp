#include<iostream>
using namespace std;

int linerSearch(int a[],int n,int find)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==find)
        return i+1;
    }
    return -1;
}


int main()
{
    int a[]={10,20,30,40,50,60};
    int n =sizeof(a)/sizeof(a[0]);
    cout<<"The Array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
    int find;
    cout<<"What you want to find : ";
    cin>>find;
    int result = linerSearch(a,n,find);
    if(result == -1)
    {
        cout<<"Not Found!\n";
    }
    else{
        cout<<"Element is found at "<<result<<" possion in array.\n";
    }

    return 0;
} 

/*
TIME COMPLEXITY:
best case  : O(1);
avg. case  : O(n);
worst case : O(n);

SPACE COMPLEXITY: o(1);
*/


