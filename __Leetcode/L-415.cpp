#include <iostream>
using namespace std;

int main()
{
  string str1 = "6913259244";
  string str2 = "71103343";
  int num1 = stoi(str1);
  int num2 = stoi(str2);
  int res = num1 + num2;
  cout << to_string(res) << endl;
  return 0;
}
