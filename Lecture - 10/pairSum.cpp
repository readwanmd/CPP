#include <iostream>
using namespace std;

int main()
{
  int sum = 7, arr[5] = {2, -3, 3, -2, 5};

  for (int i = 0; i < 5; i++)
  {
    for (int j = i + 1; j < 5; j++)
    {
      if (arr[j] + arr[i] == sum)
      {
        cout << arr[i] << " " << arr[j] << endl;
      }
    }
  }

  return 0;
}
