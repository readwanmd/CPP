#include <iostream>
using namespace std;

int main()
{
  int n, row = 1, count = 1;
  cout << "Enter n: ";
  cin >> n;

  while (row <= n)
  {
    int col = 1;
    while (col <= row)
    {
      cout << count << " ";
      count++;
      col++;
    }
    cout << endl;
    row++;
  }

  return 0;
}

/*  -- O/P --
Enter n: 5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
