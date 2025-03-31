#include <iostream>

using namespace std;

int main()
{

  string str = "Welcome to the world";

  for (auto it = str.begin(); it != str.end(); it++)
  {
    cout << *it << " ";
  }

  return 0;
}

//🔸 W e l c o m e   t o   t h e   w o r l d