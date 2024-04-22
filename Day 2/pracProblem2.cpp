// extreme print from an array
#include <iostream>
#include <vector>
using namespace std;

void printExtremes(vector<int> arr)
{
  int n = arr.size();

  int left = 0;
  int right = n - 1;
  while (left <= right)
  {
    if (left == right) // same hai toh ek print kardo
    {
      cout << arr[left] << " ";
    }
    else // warna dono print karo
    {
      cout << arr[left] << " ";
      cout << arr[right] << " ";
    }
    left++;
    right--;
  }
  cout << endl;
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

  printExtremes(arr);
}