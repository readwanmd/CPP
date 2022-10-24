#include <iostream>
using namespace std;

int sumOfAllEliments(int num[], int size)
{
  int answer = 0;
  for (int i = 0; i < size; i++)
  {
    answer = answer + num[i];
  }
  return answer;
}

int main()
{
  int size;
  cout << "Enter the size of of array: ";
  cin >> size;

  int num[100];
  cout << "Enter eliments: ";
  for (int i = 0; i < size; i++)
  {
    cin >> num[i];
  }

  int result = sumOfAllEliments(num, size);
  cout << "sum of all eliments: " << result << endl;

  return 0;
}