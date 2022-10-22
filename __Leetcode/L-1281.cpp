#include <iostream>
using namespace std;

int main()
{
  int n = 456;
  int sum = 0, prod = 1;

  while (n != 0)
  {
    int digit = n % 10;
    sum = sum + digit;
    prod = prod * digit;

    n = n / 10;
  }
  int result = prod - sum;
  cout << result << endl;

  return 0;
}