/*
💥 push_back() method in C++ is used to append a single character at the end of string.

💥 pop_back() this function is used to pop the last character from the string
*/

#include <iostream>

using namespace std;

int main()
{

  string str = "Hell";

  str.push_back('o');

  cout << str << endl; // 🔸 Hello

  str.pop_back();

  cout << str << endl; // Hell

  return 0;
}