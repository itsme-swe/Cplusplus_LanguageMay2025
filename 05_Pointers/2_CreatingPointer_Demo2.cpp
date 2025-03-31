#include <iostream>

using namespace std;

int main()
{

  int val = 30;

  int *ptr = &val;

  int **p = &ptr; // Pointer pointing to the pointer

  cout << *ptr << endl;

  cout << **p << endl; // This is also known as dereferencing

  cout << &ptr << endl;

  return 0;
}