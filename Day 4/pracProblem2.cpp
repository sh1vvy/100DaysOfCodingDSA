#include <iostream>
using namespace std;

bool search2D(int arr[][4], int row, int col, int target)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (arr[i][j] == target)
      {
        return true;
      }
    }
  }
  return false;
}

int main()
{
  const int row = 3;
  const int col = 4;
  int arr[row][col];

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> arr[i][j];
    }
  }

  int target;
  cin >> target;

  cout << endl;

  if (search2D(arr, row, col, target))
  {
    cout << "Found!" << endl;
  }
  else
  {
    cout << "Not found" << endl;
  }

  return 0;
}