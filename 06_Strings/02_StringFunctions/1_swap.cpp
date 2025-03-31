/*
💥 swap() is a built-in function in the C++ STL which swaps the value of two variables. This function supports almost every data type available in C++, whether it is a primitive type such as int, char, etc. or STL containers such as vector, maps, etc.
*/

#include <iostream>

using namespace std;

int main()
{

  int a = 10;
  int b = 20;

  swap(a, b);

  cout << "a: " << a << endl; // 20
  cout << "b: " << b << endl; // 10

  return 0;
}