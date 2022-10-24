#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;

  switch (n)
  {
  case 1:
    cout << n << endl;
    break;

  case 2:
    cout << n << endl;
    break;

  default:
    cout << "NaN";
  }
  return 0;
}