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
    char ch = 'A' + n - row;
    while (col <= row)
    {
      cout << ch << " ";
      ch++;
      col++;
    }
    cout << endl;
    row++;
  }

  return 0;
}


/*  -- O/P --
E
D E
C D E
B C D E
A B C D E
*/
