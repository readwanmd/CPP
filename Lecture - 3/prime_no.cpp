#include <iostream>
using namespace std;

int main()
{
  int n, num = 2;
  cin >> n;

  while (num < n)
  {
    if (n % num == 0)
    {
      cout << "Not Prime " << endl;
    }
    else
    {
      cout << "Prime Number " << endl;
    }

    num++;
  }

  return 0;
}