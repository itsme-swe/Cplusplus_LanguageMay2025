#include <iostream>

using namespace std;

int main()
{

  string str;

  cout << "Please enter your full name: ";

  getline(cin, str);

  cout << "Hello ! Mr. " << str;

  return 0;
}

// Hello ! Mr. Harsh Mehra