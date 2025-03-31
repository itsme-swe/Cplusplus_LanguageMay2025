#include <iostream>

using namespace std;

int main()
{

  int arr[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

  // 🔸 Here calculating the size of rows and columns in 2D Array.
  int m = sizeof(arr) / sizeof(arr[0]);
  int n = sizeof(arr[0]) / sizeof(arr[0][0]);

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

/*
1 2 3
4 5 6
7 8 9
*/