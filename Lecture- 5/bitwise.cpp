#include <iostream>
using namespace std;

int main()
{
  int a = 4, b = 6;
  cout << (a & b) << endl;
  cout << (a | b) << endl;
  cout << (~b) << endl;
  cout << (a ^ b) << endl;

  cout << (5 >> 1) << endl;
  cout << (5 >> 2) << endl;
  cout << (5 << 1) << endl;
  cout << (5 << 2) << endl;
}