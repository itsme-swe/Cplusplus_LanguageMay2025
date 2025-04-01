/*
💥 Here we'll be seeing how we can access global variable inside the main function with the help of scope resolution(::)

*/
#include <iostream>

using namespace std;

int x = 10;

int main()
{

  int x = 20;

  cout << "Local Variable: " << x << endl; // output ⇨ Local Variable: 20

  cout << "Global Variable: " << ::x << endl; // output ⇨ Global Variable: 10

  return 0;
}