#include <iostream>
using namespace std;

int main()
{
  int n;
  bool isprime = true;
  cout << "Enter n: ";
  cin >> n;

  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      isprime = false;
      break;
    }
  }

  if (isprime == false)
  {
    cout << "Not Prime Number" << endl;
  }
  else
  {
    cout << "Prime Number" << endl;
  }
  return 0;
}