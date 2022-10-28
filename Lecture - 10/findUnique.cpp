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

int findUnique(int arr[], int size)
{
  int ans = 0;
  for (int i = 0; i < size; i++)
  {
    ans = ans ^ arr[i];
  }
  return ans;
}

int main()
{
  int size;
  cout << "Enter arr size: ";
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  cout << findUnique(arr, size);

  return 0;
}