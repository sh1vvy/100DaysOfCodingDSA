/// 2D array row and column access

#include <iostream>
using namespace std;

int main()
{
  int row;
  cin >> row;
  int col = 4;
  int arr[row][col];

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> arr[i][j];
    }
  }
  cout << endl;

  // row wise access
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;

  // col wise access
  for (int i = 0; i < col; i++)
  {
    for (int j = 0; j < row; j++)
    {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }
}