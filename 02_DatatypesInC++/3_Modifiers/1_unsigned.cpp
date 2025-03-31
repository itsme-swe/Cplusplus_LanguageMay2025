#include <iostream>

using namespace std;

int main()
{

  unsigned int unsigned_int = -10;

  cout << unsigned_int << endl; // 4294967286

  /*
  As we can see, when we assigned some negative value to unsigned integer, the value gets converted to its 2’s complement because unsigned types cannot store the negative values.
  */

  return 0;
}