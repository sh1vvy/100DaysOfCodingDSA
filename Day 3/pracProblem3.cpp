// sort 0s and 1s

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &arr)
{
  int n = arr.size();
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int sortZeroOne(vector<int> &arr)
{
  int n = arr.size();
  int left = 0;
  int right = n - 1;

  while (left <= right)
  {
    if (arr[left] == 0)
    {
      left++;
    }

    else if (arr[right] == 1)
    {
      right--;
    }

    else
    {
      swap(arr[left], arr[right]);
      left++;
      right--;
    }

    // if (arr[right] == 0 && arr[left] == 1)
    // {
    //   arr[left] = 0;
    //   arr[right] = 1;
    //   left++;
    //   right--;
    // }
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

  sortZeroOne(arr);
  print(arr);
}