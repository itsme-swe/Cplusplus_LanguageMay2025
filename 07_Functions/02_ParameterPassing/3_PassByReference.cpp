/*
💥 In pass-by-reference method, instead of passing the value of the argument, we pass the reference of an argument to the function. This allows the function to change the value of the original argument. This is useful when you have to pass large size data. Pass by reference is also known as in-line function.
*/

#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

int main()
{

  int a = 10;
  int b = 20;

  swap(a, b);

  cout << "a: " << a << endl; // 20

  cout << "b: " << b << endl; // 10

  return 0;
}