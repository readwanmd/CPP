#include <iostream>
using namespace std;

int printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > 0)
    {
      cout << arr[i] << " ";
    }
  }
  cout << endl;
}

void DuplicateNumber(int arr[], int size)
{
  int duplicate[size] = {0};
  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        duplicate[i] = arr[i];
      }
    }
  }
  printArray(duplicate, size);
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

  DuplicateNumber(arr, size);

  return 0;
}
