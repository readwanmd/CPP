#include <iostream>
using namespace std;

int countSetBit(int n)
{
  int count = 0;
  while (n)
  {
    if (n & 1)
    {
      count++;
    }

    n = n >> 1;
  }

  return count;
}

int main()
{
  int a, b;
  cout << "Enter a & b: ";
  cin >> a >> b;

  cout << "Total set bits in a & b: "
       << countSetBit(a) + countSetBit(b) << endl;

  return 0;
}