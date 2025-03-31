/*
💥Implicit type conversion (also known as coercion) is the conversion of one type of data to another type automatically by the compiler when needed. It happens automatically when:

  🔸 Operations are performed on values of different data types.

  🔸 If you pass an argument to a function that expects a different data type.

  🔸 Assigning a value of one data type to a variable of another data type.
*/

#include <iostream>

using namespace std;

int main()
{

  int i = 10;

  char c = 'a';

  // c implicitly converted to int. ASCII value of 'a' is 97
  i = i + c;

  float f = i + 5.0;

  cout << i << endl; // 107

  cout << f << endl; // 112

  return 0;
}