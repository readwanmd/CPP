#include <iostream>
using namespace std;

int main()
{
  int n, row = 1;
  cout << "Enter n: ";
  cin >> n;

  while (row <= n)
  {
    int col = 1;
    while (col <= row)
    {
      cout << row << " ";
      col++;
    }
    cout << endl;
    row++;
  }

  return 0;
}

/*  -- O/P --
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
