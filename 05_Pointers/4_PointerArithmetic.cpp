#include <iostream>

using namespace std;

int main()
{

  int arr[5] = {2, 4, 6, 8, 10};

  int *p = arr;

  int n = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < n; i++)
  {
    cout << *p++ << " ";
  }

  int *ptr1;
  char *ptr2;

  return 0;
}

// Output: 2 4 6 8 10 -- 💥 In case of pointer '++' operator means moves to the next element, not an incrementing the value by 1.