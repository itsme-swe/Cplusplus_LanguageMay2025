#include <iostream>
#include <format>

using namespace std;

int main()
{

  string str1 = "Hello";

  string str2 = " World";

  str1.append(str2); // we use to concat two strings

  cout << str1 << endl; // Hello World

  return 0;
}