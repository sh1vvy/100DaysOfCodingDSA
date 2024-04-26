#include <iostream>
using namespace std;

int main()
{
  int row = 4;
  int col = 4;

  int arr[row][col] = {
      {1, 2, 3, 4},
      {2, 3, 4, 5},
      {6, 7, 8, 9},
      {1, 2, 3, 4}};

  for (int i = 0; i < row; i++)
  {
    cout << arr[i][i] << " ";
  }

  int diagSum = 0;
  for (int i = 0; i < row; i++)
  {
    diagSum = diagSum + arr[i][i];
  }

  cout << endl
       << "diagonal sum: " << diagSum << endl;
}