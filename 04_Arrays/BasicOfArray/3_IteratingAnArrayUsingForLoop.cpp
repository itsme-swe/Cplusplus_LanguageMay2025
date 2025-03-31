#include <iostream>

using namespace std;

int main()
{

  int arr[5] = {20, 10, 5, 2, 8};

  int n = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  // 🔸 output: 20 10 5 2 8

  return 0;
}