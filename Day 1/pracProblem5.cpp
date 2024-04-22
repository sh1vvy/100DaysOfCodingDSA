#include <vector>
#include <iostream>
#include <climits>

using namespace std;

int findMin(vector<int> arr)
{
  int min = INT_MAX;
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }

  return min;
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
}