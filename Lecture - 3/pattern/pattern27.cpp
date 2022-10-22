#include <iostream>
using namespace std;

int main()
{
  int n, row = 1;
  cout << "Enter n: ";
  cin >> n;

  while (row <= n)
  {
    // step - 1
    int col = 1;
    while (col <= n - row + 1)
    {
      cout << col << " ";
      col++;
    }

    // step - 2
    int star1 = 0;
    while (star1 < row - 1)
    {
      cout << '*' << " ";
      star1++;
    }

    // step - 3
    int star2 = 0;
    while (star2 < row - 1)
    {
      cout << '*' << " ";
      star2++;
    }

    // step - 4
    int col1 = n - row + 1;
    while (col1)
    {
      cout << col1 << " ";
      col1--;
    }

    cout << endl;
    row++;
  }

  return 0;
}


/*  -- O/P --
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/
