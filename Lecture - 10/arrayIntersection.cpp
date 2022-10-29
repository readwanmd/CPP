#include <iostream>
#include <limits.h>
using namespace std;

int printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int size1, size2;
  cout << "Enter 1st arr size: ";
  cin >> size1;
  int arr1[size1];
  cout << "Enter 1st arr eliments: ";
  for (int i = 0; i < size1; i++)
  {
    cin >> arr1[i];
  }
  cout << "Enter 2nd arr size: ";
  cin >> size2;
  int arr2[size2];
  cout << "Enter 2nd arr eliments: ";
  for (int i = 0; i < size2; i++)
  {
    cin >> arr2[i];
  }

  for (int i = 0; i < size1; i++)
  {
    for (int j = 0; j < size2; j++)
    {
      if (arr1[i] == arr2[j])
      {
        cout << arr1[i];
        arr2[i] = INT_MIN;
        break;
      }
    }
  }

  return 0;
}
