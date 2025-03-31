#include <iostream>

using namespace std;

int main()
{

  int val = 20;

  int *ptr = &val;

  cout << *ptr << endl; // output: 20 -- 🔸 Dereferencing

  cout << &ptr << endl; // output: 0xb905ff710  -- 🔸 Address of pointer

  cout << ptr << endl; // output:  0xb905ff71c  -- 🔸 Address Variable 'ptr' holding address of variable 'val'

  cout << &val << endl; // output: 0xb905ff71c  -- 🔸 Holding address of variable 'val'

  return 0;
}