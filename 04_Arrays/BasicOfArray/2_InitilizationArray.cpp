#include <iostream>

using namespace std;

int main()
{

  int arr[5] = {2, 4, 6, 8, 10};

  int n = sizeof(arr) / sizeof(arr[0]); // This is how we can find the elements present inside an array using sizeof() opearator.

  // output: The number of elements in array are: 5

  cout << "The number of elements in array are: " << n << endl;

  return 0;
}