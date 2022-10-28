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

void swapAlternate(int arr[], int size)
{
  for (int i = 0; i < size; i += 2)
  {
    if (arr[i] == size)
      break;
    swap(arr[i], arr[i + 1]);
  }
}

int main()
{
  int size;
  cin >> size;
  int arr[size];
  cout << "Enter eliments: ";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  swapAlternate(arr, size);
  printArray(arr, size);

  return 0;
}