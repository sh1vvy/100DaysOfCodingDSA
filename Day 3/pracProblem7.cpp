// pair Sum or Two Sum

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool findTarget(vector<int> arr, int target)
{
  int i = 0;
  int j = arr.size() - 1;
  sort(arr.begin(), arr.end());
  int n = arr.size();
  while (i < j && j <= n)
  {
    int currSum = arr[i] + arr[j];

    if (target == currSum)
    {
      return true;
    }
    else
    {
      i++;
    }
    if (i == j)
    {
      i = 0;
      j--;
    }
  }
  return false;
}

int main()
{
  vector<int> arr;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int data;
    cin >> data;
    arr.push_back(data);
  }

  int target;
  cin >> target;

  if (findTarget(arr, target))
  {
    cout << "Target Found!" << endl;
  }
  else
  {
    cout << "Target not found" << endl;
  }
}