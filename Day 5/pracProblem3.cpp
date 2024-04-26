// reverse diagonal sum

#include <iostream>
using namespace std;

int main()
{
  int row = 4;
  int col = 4;

  int arr[4][4] = {
      {1, 2, 3, 4},
      {2, 3, 4, 5},
      {6, 7, 8, 9},
      {1, 2, 3, 4}};

  for (int i = 0; i < row; i++)
  {
    cout << arr[i][col - i - 1] << " ";
  }
  cout << endl;
}
