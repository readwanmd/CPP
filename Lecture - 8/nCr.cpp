#include <iostream>
using namespace std;

int factorial(int num)
{
  int ans = 1;
  while (num)
  {
    ans = ans * num;
    num--;
  }
  return ans;
}

int nCr(int n, int r)
{
  return factorial(n) / (factorial(r) * (factorial(n - r)));
}

int main()
{
  int n, r, t;
  cin >> t;
  while (t--)
  {
    cin >> n;
    cin >> r;
    cout << nCr(n, r) << endl;
  }

  return 0;
}