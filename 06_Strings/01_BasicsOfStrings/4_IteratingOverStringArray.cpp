#include <iostream>

using namespace std;

int main()
{

  string str[] = {"Harsh", "Mukul", "SDE", "SWE"};

  for (auto it = begin(str); it != end(str); it++)
  {
    cout << *it << " ";
  }

  return 0;
}

// 🔸 Harsh Mukul SDE SWE