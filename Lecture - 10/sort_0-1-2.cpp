#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void sortZeroOneTwos(int arr[], int size)
{
  int step = 0, low = 0, mid = 0, high = size - 1;

  while (mid <= high)
  {
    switch (arr[mid])
    {
    case 0:
      swap(arr[low++], arr[mid++]);
      break;

    case 1:
      mid = mid + 1;
      break;

    case 2:
      swap(arr[mid], arr[high--]);
      break;
    }
  }
}

int main()
{
  int arr[9] = {0, 2, 2, 1, 0, 1, 1, 0, 1};

  sortZeroOneTwos(arr, 9);
  printArray(arr, 9);

  return 0;
}