#include <iostream>
using namespace std;

int getPivot(int arr[], int size)
{
  int s = 0, e = size - 1;
  int mid = s + (e - s) / 2;

  while (s < e)
  {
    if (arr[mid] >= arr[0])
    {
      s = mid + 1;
    }
    else
    {
      e = mid;
    }
    mid = s + (e - s) / 2;
  }
  return s;
}

int binarySearch(int arr[], int start, int end, int key)
{

  int mid = start + (end - start) / 2;

  while (start <= end)
  {
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (key > arr[mid])
    {
      start = mid + 1;
    }
    else if (key < arr[mid])
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}

int findPosition(int arr[], int size, int k)
{
  int pivot = getPivot(arr, size);
  if (k >= arr[pivot] && k <= arr[size - 1])
    return binarySearch(arr, pivot, size - 1, k);
  else
    return binarySearch(arr, 0, pivot - 1, k);
}

int main()
{
  int n = 5;
  int arr[n] = {7, 9, 1, 2, 3};
  int k = 99;

  cout << findPosition(arr, n, k);

  return 0;
}
