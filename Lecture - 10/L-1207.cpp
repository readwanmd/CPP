#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

bool findUniqueOccurrences(int arr[], int size)
{
  int count, freq[size];
  for (int i = 0; i < size; i++)
  {
    freq[i] = -1;
  }
  for (int i = 0; i < size; i++)
  {
    count = 1;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;

        freq[j] = 0;
      }
    }
    if (freq[i] != 0)
    {
      freq[i] = count;
    }
  }

  // for (int i = 0; i < size; i++)
  // {
  //   if (freq[i] != 0)
  //   {
  //     cout << arr[i] << " -> " << freq[i] << endl;
  //   }
  // }
  for (int i = 0; i < size; i++)
  {
    if (freq[i] != 0)
    {
      for (int j = i + 1; j < size; j++)
      {
        if (freq[i] == freq[j])
        {
          return false;
        }
      }
    }
  }
  return true;
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

  cout << findUniqueOccurrences(arr, size);

  return 0;
}