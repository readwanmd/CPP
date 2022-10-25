#include <iostream>
using namespace std;

int main()
{
  int a, b, sum = 0;
  while (true)
  {
    cin >> a >> b;
    if (a <= 0 || b <= 0)
      break;

    if (a < b)
    {
      for (int i = a; i <= b; i++)
      {
        cout << i << " ";
        sum += i;
      }
    }
    else if (b < a)
    {
      for (int i = b; i <= a; i++)
      {
        cout << i << " ";
        sum += i;
      }
    }
    cout << "Sum=" << sum << endl;
    sum = 0;
  }
  return 0;
}