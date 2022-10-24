#include <iostream>
using namespace std;

bool isEven(int n)
{
  if (n & 1)
  {
    return false;
  }
  return true;
}

int main()
{
  int num;
  cout << "Enter n: ";
  cin >> num;

  if (isEven(num))
  {
    cout << "Even number" << endl;
  }
  else
    cout << "Odd Number" << endl;

  return 0;
}