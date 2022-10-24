#include <iostream>
using namespace std;

void updateArr(int arr[], int size)
{
  arr[0] = 154;
  cout << "Arrey inside updateArr function" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{

  int arr[3] = {1, 2, 3};

  updateArr(arr, 3);

  // print array
  cout << "Arrey inside main function" << endl;
  for (int i = 0; i < 3; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}