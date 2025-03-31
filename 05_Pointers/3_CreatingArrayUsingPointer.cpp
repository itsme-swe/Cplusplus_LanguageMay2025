/*
💥 Dynamic memory allocation inside heap memory using pointer
*/
#include <iostream>

using namespace std;

int main()
{

  int *p = new int[5]{10, 20, 30, 40, 50};

  for (int i = 0; i < 5; i++)
  {
    cout << p[i] << " ";
  }

  delete[] p;

  p = nullptr; // Making pointr null by using modern c++ lateral.

  return 0;
}

// output: 10 20 30 40 50