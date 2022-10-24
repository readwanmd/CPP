#include <iostream>
using namespace std;

int fibonacci(int n)
{
  int num1 = 0, num2 = 1, feb = 0;

  for (int i = 1; i <= n - 2; i++)
  {
    feb = num1 + num2;
    num1 = num2;
    num2 = feb;
  }

  return feb;
}

int main()
{
  // int n = 5;

  cout << fibonacci(10) << endl;

  return 0;
}