/*
💥 A Char datatype is a datatype that is used to store a single character. It is always enclosed within a single quote (‘ ‘).
*/

#include <iostream>

using namespace std;

int main()
{

  char ch = 'H';

  cout << "The variable ch holding:" << ch << "\n";

  // The variable ch holding:H

  cout << endl;

  char letter;

  cout << "Enter the first letter of GF name:";

  cin >> letter;

  cout << "The first letter of the name is: " << letter << endl;

  // The first letter of the name is: J

  return 0;
}