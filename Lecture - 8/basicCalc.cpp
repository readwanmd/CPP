#include <iostream>
using namespace std;

int main()
{
  int a, b;

  cout << "Enter a: ";
  cin >> a;

  cout << "Enter b: ";
  cin >> b;

  char op;
  cout << "Enter Operation: ";
  cin >> op;

  switch (op)
  {
  case '+':
    cout << a + b << endl;
    break;
  case '-':
    cout << a - b << endl;
    break;
  case '*':
    cout << a * b << endl;
    break;
  case '/':
    cout << a / b << endl;
    break;
  case '%':
    cout << a % b << endl;
    break;
  default:
    cout << "Not a valid operation";
  }

  return 0;
}
