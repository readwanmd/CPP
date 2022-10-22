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
    while (col <= n)
    {
      char ch = 'A' + row + col - 2;
      cout << ch << " ";
      col++;
    }
    cout << endl;
    row++;
  }

  return 0;
}


/*  -- O/P --
A B C D E
B C D E F
C D E F G
D E F G H
E F G H I
*/
