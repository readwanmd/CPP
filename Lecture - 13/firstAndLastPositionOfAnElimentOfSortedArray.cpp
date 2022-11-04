#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int key)
{
  int s = 0, e = size - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;
  while (s <= e)
  {
    if (arr[mid] == key)
    {
      ans = mid;
      e = mid - 1;
    }
    else if (key > arr[mid])
    {
      s = mid + 1;
    }
    else if (key < arr[mid])
    {
      e = mid - 1;
    }

    mid = s + (e - s) / 2;
  }
  return ans;
}

int lastOccurrence(int arr[], int size, int key)
{
  int s = 0, e = size - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;
  while (s <= e)
  {
    if (arr[mid] == key)
    {
      ans = mid;
      s = mid + 1;
    }
    else if (key > arr[mid])
    {
      s = mid + 1;
    }
    else if (key < arr[mid])
    {
      e = mid - 1;
    }

    mid = s + (e - s) / 2;
  }
  return ans;
}

int main()
{
  int even[6] = {0, 1, 2, 3, 3, 3};
  int key = 3;

  cout << "First position of " << key << " is " << firstOccurrence(even, 6, key) << endl;
  cout << "Last position of " << key << " is " << lastOccurrence(even, 6, key) << endl;

  pair<int, int> p;
  p.first = firstOccurrence(even, 6, key);
  p.second = lastOccurrence(even, 6, key);

  cout << p.first << " " << p.second << endl;

  return 0;
}
