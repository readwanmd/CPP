#include <iostream>
using namespace std;

int peakIndex(int arr[], int size)
{
  int s = 0, e = size - 1;
  int mid = s + (e - s) / 2;
  while (s < e)
  {
    if (arr[mid] < arr[mid + 1])
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

int main()
{
  int arr[3] = {0, 1, 0};

  cout << peakIndex(arr, 3);

  return 0;
}