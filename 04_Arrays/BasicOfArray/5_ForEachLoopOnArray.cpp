#include <iostream>

using namespace std;

int main()
{

  char ch[5] = {'A', 'E', 'O', 'U', 'I'};

  for (char ele : ch)
  {
    cout << ele << " ";
  }

  // 🔸 A E O U I

  cout << endl;

  // Even we can use auto keyword inside forEach loop
  for (auto x : ch)
  {
    cout << x << " ";
  }

  //🔸 output: A E O U I
  return 0;
}