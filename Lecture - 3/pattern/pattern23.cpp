#include <iostream>
using namespace std;

int main()
{
  int n, row = 1;
  cout << "Enter n: ";
  cin >> n;

  while (row <= n)
  {
    int space = n - (n - row + 1);
    while (space)
    {
      cout << " ";
      space--;
    }

    int col = n;
    while (col >= row)
    {
      cout << "*";
      col--;
    }
    cout << endl;
    row++;
  }

  return 0;
}


/*  -- O/P --
*****
 ****
  ***
   **
    *
*/
