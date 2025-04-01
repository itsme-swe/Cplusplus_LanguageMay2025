#include <iostream>

using namespace std;

void fun()
{
  static int count = 0; // The count variable will be created only one time in the memory.

  count++;

  cout << count << " ";
}

int main()
{

  for (int i = 0; i < 5; i++)
  {
    fun();
  }
  return 0;
}

// output ⇨ 1 2 3 4 5