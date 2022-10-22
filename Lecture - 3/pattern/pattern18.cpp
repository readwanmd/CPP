#include <iostream>
using namespace std;

int main()
{
  int n, row = 1;
  cout << "Enter n: ";
  cin >> n;

  while (row <= n)
  {
    int col = 0;
    while (col < row)
    {
      char ch = 'A' + row + col - 1;
      cout << ch
           << " ";
      col++;
    }
    cout << endl;
    row++;
  }

  return 0;
}


/*  -- O/P --
A
B C
C D E
D E F G
E F G H I
*/
