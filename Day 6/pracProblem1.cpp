// Arrays Extra 3
// Sort negative and positive elements

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortNegPos(vector<int> &arr)
{
  int left = 0;
  int right = arr.size() - 1;

  while (left <= right)
  {
    if (arr[left] < 0)
    {
      left++;
    }
    else if (arr[right] > 0)
    {
      right--;
    }
    else
    {
      // swap(arr[left], arr[right]);
      int temp = arr[left];
      arr[left] = arr[right];
      arr[right] = temp;
      left++;
      right--;
    }
  }
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
  int n;
  cin >> n;

  vector<int> arr;

  for (int i = 0; i < n; i++)
  {
    int data;
    cin >> data;
    arr.push_back(data);
  }

  sortNegPos(arr);
  print(arr);
}