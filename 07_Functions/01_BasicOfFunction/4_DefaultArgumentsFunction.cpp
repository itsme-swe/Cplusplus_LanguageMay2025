/*
💥 A default argument is a value provided for a parameter in a function declaration that is automatically assigned by the compiler if no value is provided for those parameters in function call. If the value is passed for it, the default value is overwritten by the passed value.
*/
#include <iostream>

using namespace std;

template <typename T>
T add(T x, T y, T z = 0)
{
  return x + y + z;
}

int main()
{
  int sum1 = add(10, 10);

  int sum2 = add(10, 10, 20);

  double sum3 = add(5.5f, 10.0f, 5.0f);

  double sum4 = add(20.5f, 10.0f);

  cout << "2 integer Arguments: " << sum1 << endl; // 2 integer Arguments: 20

  cout << "3 integer Arguments: " << sum2 << endl; // 3 integer Arguments: 40

  cout << "3 float Arguments: " << sum3 << endl; // 3 float Arguments: 20.5

  cout << "2 float Arguments: " << sum4 << endl; // 2 float Arguments: 30.5

  return 0;
}