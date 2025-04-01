/*

💥 The pass-by-pointer is very similar to the pass-by-reference method. The only difference is that we pass the raw address of the argument as the parameter to the function instead of reference.

*/

#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{

  int a = 10;
  int b = 20;

  swap(&a, &b);

  cout << "a: " << a << endl; // 20

  cout << "b: " << b << endl; // 10

  return 0;
}