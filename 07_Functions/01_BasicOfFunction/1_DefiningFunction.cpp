#include <iostream>

using namespace std;

int addNumber(int a, int b)
{
  return a + b;
}

int main()
{

  int sum = addNumber(10, 20);

  cout << "Sum of a + b is: " << sum << endl; // Output ⇨ Sum of a + b is: 30
  return 0;
}