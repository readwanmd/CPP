#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n;
  cout << " Enter n: ";
  cin >> n;
  bool b = false;
  for (int i = 0; i < 30; i++)
  {
    if (n == pow(2, i))
    {
      b = true;
    }
    // cout << i << ". " << pow(2, i) << endl;
  }
  cout << b;
  return 0;
}