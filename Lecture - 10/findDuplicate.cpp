#include <iostream>
using namespace std;

int printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int DuplicateNumber(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 1; j < size; j++)
    {
      if (arr[j] == arr[i])
      {
        return arr[i];
      }
    }
  }
}
int main()
{
  int size;
  cout << "Enter arr size: ";
  cin >> size;
  int arr[size];
  cout << "Enter arr elimentss: ";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  cout << DuplicateNumber(arr, size);

  return 0;
}