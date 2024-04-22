// 5 size ka array banao
// user input lo
// sum nikalo pure array ka

#include <iostream>
using namespace std;

int main()
{
  int arr[5];
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }

  int sum = 0;
  for (int i = 0; i < 5; i++)
  {
    sum = sum + arr[i];
  }

  cout << "SUM IS: " << sum;
}