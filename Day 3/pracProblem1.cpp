// maximum Element in Array
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int findMax(vector<int> arr)
{
  int max = INT_MIN;
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  return max;
}

int main()
{
  vector<int> arr;
  arr.push_back(1);
  arr.push_back(2);
  arr.push_back(3);
  arr.push_back(4);
  arr.push_back(5);

  cout << findMax(arr);
}