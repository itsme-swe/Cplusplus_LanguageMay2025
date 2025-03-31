/*
💥 A template is a simple yet very powerful tool in C++. The simple idea is to pass the data type as a parameter so that we don’t need to write the same code for different data types.

C++ adds two new keywords to support templates: ‘template’ and ‘typename’. The second keyword can always be replaced by the keyword ‘class’. It means that we can interchangeably use class and typename keywords.

Templates are expanded at compiler time. This is like macros. The difference is, that the compiler does type-checking before template expansion. The idea is simple, source code contains only function/class, but compiled code may contain multiple copies of the same function/class.
*/

#include <iostream>

using namespace std;

template <typename T>
T myMax(T x, T y)
{
  return (x > y) ? x : y;
}

int main()
{

  cout << myMax<int>(20, 40);

  cout << myMax<double>(30.5f, 10.5f);

  return 0;
}