// Reversing an Array
#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> arr)
{
  int n = arr.size();
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void reverse(vector<int> &arr)
{
  int n = arr.size();
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      swap(arr[i], arr[j]);
    }
  }
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

  reverse(arr);
  print(arr);
}
