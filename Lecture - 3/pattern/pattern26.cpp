#include <iostream>
using namespace std;

int main()
{
  int n, row = 1;
  cout << "Enter n: ";
  cin >> n;

  while (row <= n)
  {
    // space Print
    int space = n - row;
    while (space)
    {
      cout << ' ' << " ";
      space--;
    }

    // 1st triangle
    int col = 1;
    while (col <= row)
    {
      cout << col << " ";
      col++;
    }

    // second triangle
    int start = row - 1;
    while (start)
    {
      cout << start << " ";
      start--;
    }

    cout << endl;
    row++;
  }

  return 0;
}


/*  -- O/P --
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/
