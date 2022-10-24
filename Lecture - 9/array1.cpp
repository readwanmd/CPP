#include <iostream>
using namespace std;

// hold
void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "Printing Done!" << endl;
}

int main()
{
  int num[100];

  int second[3] = {3, 7, 77};
  // cout << second[2];

  // initialize first 2 locations with 2, 5
  int third[13] = {2, 5};
  printArray(third, 13);

  // initialize all locations with 0
  int fourth[10] = {0};
  printArray(fourth, 10);

  // initialize all locations with 1 is not possible as bellow, it will initialoze 1 only in first location.
  int fifth[11] = {1};
  printArray(fifth, 11);

  int fifthSize = sizeof(fifth) / sizeof(int);
  cout << fifthSize << endl;

  cout << endl
       << "Everything is good!" << endl;

  return 0;
}