// Missing Number
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMissing(vector<int> &arr)
{
  int n = arr.size();
  int totalSum = n * (n + 1) / 2;

  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = sum + arr[i];
  }

  return totalSum - sum;
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

  cout << findMissing(arr) << endl;
}