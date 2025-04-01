/*
💥 In this example we are finding min and max
*/

#include <iostream>

using namespace std;

int max(int a, int b)
{
  return (a > b) ? a : b;
}

int min(int x, int y)
{
  return (x < y) ? x : y;
}
int main()
{

  int (*fp)(int, int);

  fp = max; // 🔸 here pointer is pointing to max() function

  int maxNum = fp(20, 10);

  cout << "MaxNum: " << maxNum << endl; // output ⇨ MaxNum: 20

  cout << endl;

  fp = min; // 🔸 And, here pointer is pointing to min() function

  int minNum = fp(20, 10);

  cout << "MinNum: " << minNum << endl; // output ⇨ MinNum: 10

  return 0;
}