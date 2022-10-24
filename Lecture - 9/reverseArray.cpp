#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  // print arr
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << ", ";
  }
}

void reverseArray(int arr[], int size)
{
  int start = 0, end = size - 1;
  while (start <= end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

int main()
{
  int size;
  cout << "Enter the size of of array: ";
  cin >> size;

  int num[100];
  cout << "Enter eliments: ";
  for (int i = 0; i < size; i++)
  {
    cin >> num[i];
  }

  reverseArray(num, size);
  printArray(num, size);

  return 0;
}