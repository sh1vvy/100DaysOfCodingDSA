// 10 size array banao
// take input in that array
// double up each value of that array

#include <iostream>
using namespace std;

int main()
{
  int arr[10];

  for (int i = 0; i < 10; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < 10; i++)
  {
    arr[i] = arr[i] * 2;
  }

  for (int i = 0; i < 10; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}