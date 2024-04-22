// right shift the array

#include <iostream>
#include <vector>
using namespace std;

void rightShift(vector<int> &arr)
{
  int temp = arr[arr.size() - 1];

  for (int i = arr.size() - 1; i >= 1; i--)
  {
    arr[i] = arr[i - 1];
  }

  arr[0] = temp;
}

void print(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> arr;
  arr.push_back(1);
  arr.push_back(2);
  arr.push_back(3);
  arr.push_back(4);
  arr.push_back(5);

  rightShift(arr);

  print(arr);
}