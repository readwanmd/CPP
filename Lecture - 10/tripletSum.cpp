#include <iostream>
using namespace std;

int main()
{
  int sum = 0, arr[5] = {2, -3, 3, 0, 5};

  for (int i = 0; i < 5; i++)
  {
    for (int j = i + 1; j < 5; j++)
    {
      for (int k = i + 2; k < 5; k++)
      {
        if (arr[i] + arr[j] + arr[k] == sum)
        {
          cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
        }
      }
    }
  }

  return 0;
}