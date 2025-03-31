#include <iostream>

using namespace std;

int main()
{

  string str[] = {"Harsh", "Mukul", "Juhu", "Sam", "Mahesh"};

  int n = sizeof(str) / sizeof(str[0]);

  int i = 0;

  while (i < n)
  {
    cout << str[i] << " ";
    i++;
  }

  // 🔸 Output: Harsh Mukul Juhu Sam Mahesh

  return 0;
}