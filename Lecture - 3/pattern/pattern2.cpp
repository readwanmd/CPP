#include <iostream>
using namespace std;

int main()
{
  int n, i = 1;
  cout << "Enter n: ";
  cin >> n;

  while (i <= n)
  {
    int j = 1;
    while (j <= n)
    {
      cout << i << " ";
      j++;
    }
    cout << endl;
    i++;
  }

  return 0;
}

/*  -- O/P --
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
*/
