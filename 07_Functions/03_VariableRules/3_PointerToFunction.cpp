#include <iostream>

using namespace std;

void display()
{
  cout << "Hello World" << endl;
}

int main()
{
  void (*fp)(); // Declaration  -- fp is a pointer that can store the address of a function that takes no parameters and returns void.

  fp = display; // Initilization  -- The function pointer fp is assigned the address of the display() function.

  fp(); // Invoking function  -- The function display() is called using the function pointer.

  return 0;
}