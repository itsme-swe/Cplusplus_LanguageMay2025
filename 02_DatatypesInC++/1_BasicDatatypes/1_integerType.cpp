#include <iostream>

using namespace std;

int main()
{

  int x = 20;

  cout << "x is integer type holding value: " << x << endl;

  // x is integer type holding value: 20

  cout << typeid(x).name() << endl; // i

  return 0;
}

/*
Integer data type denotes that the given variable can store the integer numbers. The keyword used to define integers is int. Its size is 4-bytes (for 64-bit) systems and can store numbers for binary, octal, decimal and hexadecimal base systems in the range from -2,147,483,648 to 2,147,483,647.
*/