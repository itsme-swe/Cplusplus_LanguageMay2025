/*
💥  string find() is a library function used to find the first occurrence of a sub-string in the given string, and it returns the index value.
*/

#include <iostream>

using namespace std;

int main()
{

  string str = "volvo";

  string sub = "v";

  cout << str.find(sub) << endl; // 0

  cout << str.find("o") << endl; // 1

  cout << endl;

  string str1 = "Welcome to jungle";

  string sub1 = "kle";

  int res = str1.find(sub1);

  if (res != string::npos) // 🔸 'string::npos' Special value meaning "not found"
  {
    cout << res << endl;
  }
  else
  {
    cout << sub1 << ": Not Found" << endl;
  }

  return 0;
}