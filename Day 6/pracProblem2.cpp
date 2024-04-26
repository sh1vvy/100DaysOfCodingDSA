// sort colors

#include <iostream>
#include <vector>
using namespace std;

void sort012(vector<int> &arr)
{
  int n = arr.size();
  int left = 0;
  int right = n - 1;
  int index = 0;

  while (index < right)
  {
    if (arr[index] == 0)
    {
      swap(arr[left], arr[index]);
      left++;
      index++;
    }
    else if (arr[index] == 1)
    {
      index++;
    }
    else
    {
      swap(arr[index], arr[right]);
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

  sort012(arr);
  print(arr);
}