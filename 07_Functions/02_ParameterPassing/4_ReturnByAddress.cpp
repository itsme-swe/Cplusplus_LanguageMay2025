#include <iostream>
#include <span>

using namespace std;

int *fun(int size)
{
  int *p = new int[size];

  for (int i = 0; i < size; i++)
  {
    p[i] = i + 1;
  }

  return p;
}

int main()
{
  int *ptr = fun(5);

  for (int i = 0; i < 5; i++)
  {
    cout << ptr[i] << " ";
  }

  delete[] ptr;
  return 0;
}

// 🔸 1 2 3 4 5