// reverse the array without using built-in methods

#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> arr)
{
  int n = arr.size();

  int left = 0;
  int right = n - 1;

  while (left <= right)
  {
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;

    left++;
    right--;
  }

  for (int i = 0; i < n; i++)
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

  reverse(arr);
}