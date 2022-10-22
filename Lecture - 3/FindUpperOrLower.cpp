#include <iostream>
using namespace std;

int main()
{
  char ch;
  cin >> ch;

  if (ch > 'a' && ch < 'z')
  {
    cout << "Lowercase character!" << endl;
  }

  else if (ch > 'A' && ch < 'Z')
  {
    cout << "Uppercase character!" << endl;
  }

  else if (ch >= '0' && ch < '9')
  {
    cout << "Numeric character!" << endl;
  }

  return 0;
}