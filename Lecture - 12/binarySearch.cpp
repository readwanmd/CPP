#include <iostream>
using namespace std;

int binSearch(int arr[], int size, int key)
{
  int low = 0;
  int high = size - 1;
  // int mid = (low + high) / 2;
  int mid = low + ((high - low) / 2);

  while (low <= high)
  {
    if (arr[mid] == key)
    {
      return mid;
    }
    if (key > arr[mid])
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }

    // mid = (high + low) / 2;
    mid = low + ((high - low) / 2);
  }
  return -1;
}

int main()
{
  int size = 9;
  int arr[size] = {4, 6, 8, 10, 12, 14, 16, 18, 20};

  int index = binSearch(arr, size, 20);
  cout << index << " " << endl;
  int s = 0, e = 1, a;
  a = (s + e) / 2;
  cout << "a: " << a << endl;

  return 0;
}
