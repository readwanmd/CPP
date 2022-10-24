#include <iostream>
using namespace std;

int AP(int n)
{
  return (3 * n) + 7;
}

int main()
{
  int n;
  cin >> n;

  cout << "A.P = " << AP(n) << endl;

  return 0;
}