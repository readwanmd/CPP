#include <iostream>
using namespace std;

int linearSearch(int num[], int size, int search)
{
  for (int i = 0; i < size; i++)
  {
    if (num[i] == search)
    {
      return i;
    }
  }
  return -1;
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

  int search;
  cout << "Enter search eliment: ";
  cin >> search;

  int result = linearSearch(num, size, search);

  if (result >= 0)
  {
    cout << "Eliment found at position: " << result << endl;
  }
  else
    cout << "Eliment not found!" << endl;

  return 0;
}
