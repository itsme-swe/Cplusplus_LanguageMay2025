#include <iostream>

using namespace std;

int main()
{

  string str = "hello";

  for (auto it = str.rbegin(); it != str.rend(); it++)
  {
    cout << *it << " ";
  }

  return 0;
}

// 🔸 o l l e h