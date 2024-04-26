#include <iostream>
using namespace std;

void rowWiseSum(int arr[][4], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    int sum = 0;
    for (int j = 0; j < col; j++)
    {
      sum += arr[i][j]; // simplified addition
    }
    cout << "Sum of row " << i << ": " << sum << endl;
  }
}

void colWiseSum(int arr[][4], int row, int col)
{
  for (int i = 0; i < col; i++)
  {
    int sum = 0;
    for (int j = 0; j < row; j++)
    {
      sum += arr[j][i]; // simplified addition
    }
    cout << "Sum of column " << i << ": " << sum << endl;
  }
}

int main()
{
  int row = 3; // Rows are dynamic but should be known before compilation
  int col = 4; // Columns are fixed to 4
  int arr[row][col] = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 1, 2, 3}}; // Array is statically allocated with 3 rows and 4 columns

  // cout << "Enter elements for a " << row << "x" << col << " matrix:" << endl;
  // for (int i = 0; i < row; i++)
  // {
  //   for (int j = 0; j < col; j++)
  //   {
  //     cin >> arr[i][j];
  //   }
  // }

  cout << "Row-wise sums:" << endl;
  rowWiseSum(arr, row, col);
  cout << "Column-wise sums:" << endl;
  colWiseSum(arr, row, col);
  cout << endl;

  return 0;
}
