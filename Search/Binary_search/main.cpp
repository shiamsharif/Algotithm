#include <iostream>
using namespace std;

int BinarySearch(int a[], int beg, int end, int find)
{
  int mid;
  if (end >= beg)
  {
    mid = (beg + end) / 2;

    if (a[mid] == find)
    {
      return mid + 1;
    }
    else if (a[mid] < find)
    {
      return BinarySearch(a, mid + 1, end, find);
    }
    else
    {
      return BinarySearch(a, beg, mid - 1, find);
    }
  }
  return -1;
}

int main()
{
  int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
  int n = sizeof(a) / sizeof(a[0]);
  cout << "The element is : ";
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << "  ";
  }
  cout << endl;
  int find;
  cin >> find;
  int result = BinarySearch(a, 0, n, find);

  if (result == -1)
  {
    cout << "Not Found.!\n";
  }
  else
  {
    cout << "Found the element at " << result << " possion is Array.\n";
  }

  return 0;
}

/*
TIME COMPLEXITY:
best case  : O(1);
avg. case  : O(log n);
worst case : O(log n);

SPACE COMPLEXITY: o(1);
*/
/*
// Binary Search in C++

#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  while (low <= high)
  {
    int mid = (low + high) / 2;

    if (array[mid] == x)
      return mid+1;

    else if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int x;
  cin>>x;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}
*/