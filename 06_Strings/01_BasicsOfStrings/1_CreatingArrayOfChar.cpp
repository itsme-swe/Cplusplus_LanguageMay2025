#include <iostream>

using namespace std;

int main()
{

  char s[] = "Hello";

  string s1[] = {"Hello", "Mukul"}; // array of string

  cout << typeid(s).name() << endl; // output: A6_c -- 💥 s is an array of characters (char s[6]), including the null terminator (\0).

  cout << is_array<decltype(s1)>::value << endl; // Output: 1 (true)  -- 💥 Return boolean value if output is true for 1 and flase for 0.

  return 0;
}