#include <iostream>
using namespace std;

int main()
{
  int n, row = 1;
  cout << "Enter n: ";
  cin >> n;

  while (row <= n)
  {
    int column = 1;
    while (column <= row)
    {
      cout << "*"
           << " ";
      column++;
    }
    cout << endl;
    row++;
  }

  return 0;
}

/*  -- O/P --
Enter n: 5
*
* *
* * *
* * * *
* * * * *
*/
