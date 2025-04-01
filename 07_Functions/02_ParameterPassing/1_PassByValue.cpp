/*
In pass by value method, a variable's value is copied and then passed to the function. As the result, any changes to the parameter inside the function will not affect the variable's original value in the caller. This method is simple, easy to understand and implement but it is not preferred for large size of data structures at it involves copying the value.
*/
#include <iostream>

using namespace std;

void swap(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
}

int main()
{

  int a = 20;
  int b = 30;

  swap(a, b);

  cout << "a: " << a << endl; // 20

  cout << "b: " << b << endl; // 30

  return 0;
}

/* The copy of values a and b are passed to the function as formal parameters, so once the function scope is over the function get deleted from the stack memory and original values remains unchanged inside main function.*/