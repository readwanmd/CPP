#include <iostream>
#include <limits.h>
using namespace std;

int getMin(int num[], int n)
{
  int minValue = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    // predefined max function
    minValue = min(minValue, num[i]);

    // my code
    // if (num[i] < min)
    // {
    //   min = num[i];
    // }
  }
  return minValue;
}

int getMax(int num[], int n)
{
  int maxValue = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    // predefined max function
    maxValue = max(maxValue, num[i]);

    // my code
    //  if (num[i] > max)
    //  {
    //    max = num[i];
    //  }
  }
  return maxValue;
}

int main()
{
  int size;
  cout << "Enter the size of array: ";
  cin >> size;

  int num[100];
  // array input
  cout << "Enter array eliments: ";
  for (int i = 0; i < size; i++)
  {
    cin >> num[i];
  }

  cout << "Maximum value of array: " << getMax(num, size) << endl;
  cout << "Minimum value of array: " << getMin(num, size) << endl;

  return 0;
}