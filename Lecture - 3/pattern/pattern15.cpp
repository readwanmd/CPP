#include <iostream>
using namespace std;

int main()
{
  int n, row = 1;
  cout << "Enter n: ";
  char ch = 'A';
  cin >> n;

  while (row <= n)
  {
    int col = 1;
    while (col <= n)
    {
      cout << ch << " ";
      col++;
      ch++;
    }
    cout << endl;
    row++;
  }

  return 0;
}


/*  -- O/P --
A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y
*/
