/*
💥 Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters. When a function name is overloaded with different jobs it is called Function Overloading.
*/

#include <iostream>

using namespace std;

int sum(int a, int b)
{
  return a + b;
}

int sum(int a, int b, int c)
{
  return a + b + c;
}

int main()
{
  int sum1 = sum(10, 20, 30);

  int total = sum(10, 40);

  cout << "Sum1: " << sum1 << endl;

  cout << "total: " << total << endl;

  return 0;
}