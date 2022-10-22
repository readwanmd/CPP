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
    // int value = row;
    while (col < row)
    {
      cout << row - col << " ";
      // value++;
      col++;
    }
    cout << endl;
    row++;
  }

  return 0;
}

/*  -- O/P --
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/
