#include <iostream>
using namespace std;

long long int sqrtUsingBinary(int n)
{
  int s = 0, e = n, ans = -1;
  long long int mid = s + (e - s) / 2;

  while (s <= e)
  {
    int square = mid * mid;

    if (square == n)
    {
      return mid;
    }
    else if (square < n)
    {
      ans = mid;
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

int main()
{
  int key = 4;
  cout << sqrtUsingBinary(key) << endl;

  return 0;
}