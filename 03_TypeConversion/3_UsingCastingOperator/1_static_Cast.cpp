/*
💥 The static_cast operator is the most commonly used casting operator in C++. It performs compile-time type conversion and is mainly used for explicit conversions that are considered safe by the compiler.

    static_cast <new_type> (exp);

*/

#include <iostream>

using namespace std;

int main()
{

  char ch = 'b';

  int i = static_cast<int>(ch);

  cout << "The Corresponding ASCII value of 'b' : " << i << endl;

  // output: The Corresponding ASCII value of 'b' : 98

  cout << typeid(i).name() << endl; // i

  cout << typeid(ch).name() << endl; // c

  return 0;
}