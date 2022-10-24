#include <iostream>
using namespace std;

void dummy(int n)
{
  n++;
  cout << "Dummy func - " << n << endl;
}

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;

  dummy(n);

  cout << "Main Func - " << n << endl;

  return 0;
}