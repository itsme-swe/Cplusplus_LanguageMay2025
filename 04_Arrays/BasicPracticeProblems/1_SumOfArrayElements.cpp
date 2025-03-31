#include <iostream>

using namespace std;

int main()
{

  int arr[5] = {2, 4, 6, 8};

  int sum = 0;

  for (auto x : arr)
  {
    sum += x;
  }

  cout << "The sum of array elements are: " << sum << endl;

  // 🔸 output: The sum of array elements are: 20

  cout << endl;

  // 💥 Using traditional for loop

  int arr1[5] = {10, 20, 30, 40, 50};

  int n = sizeof(arr1) / sizeof(arr1[0]);

  int sum1 = 0;

  for (int i = 0; i < n; i++)
  {
    sum1 += arr1[i];
  }

  cout << "Total of elements is: " << sum1;

  // Output: Total of elements is: 150

  return 0;
}