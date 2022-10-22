#include <iostream>
using namespace std;

int main()
{
  int n, row = 1;
  cout << "Enter n: ";
  cin >> n;

  while (row <= n)
  {
    int space = n - row;
    while (space)
    {
      cout << " ";
      space--;
    }

    int col = 1;
    while (col <= row)
    {
      cout << row;
      col++;
    }
    cout << endl;
    row++;
  }

  return 0;
}


/*  -- O/P --
    1
   22
  333
 4444
55555
*/
