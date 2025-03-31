#include <iostream>

using namespace std;

int main()
{

  int arr[] = {20, 35, 55, 10, 25};

  int n = sizeof(arr) / sizeof(arr[0]);

  int max = INT_MIN;

  // 🔸 Here we are using forEach loop
  for (auto x : arr)
  {
    if (x > max)
    {
      max = x;
    }
  }

  cout << "The max element in array is " << max << endl;  // output: // Output: The max element in array is 35

  cout << endl;

  // 🔸 Here we are using traditional for loop
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  cout << "Max element using traditional looping: " << max; // output: Max element using traditional looping: 55

  return 0;
}

