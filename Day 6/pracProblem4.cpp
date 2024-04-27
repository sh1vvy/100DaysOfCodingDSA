// Rotate Array by k

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rotateArrayByK(vector<int> &arr, int k)
{
  int n = arr.size();
  // what
  vector<int> ans(n);
  for (int index = 0; index < n; index++)
  {
    int newIndex = (index + k) % n;
    ans[newIndex] = arr[index];
  }

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
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

  int k;
  cin >> k;

  rotateArrayByK(arr, k);
}