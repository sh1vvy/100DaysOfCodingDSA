// extreme print from an array
#include <iostream>
#include <vector>
using namespace std;

void printExtremes(vector<int> arr)
{
  int n = arr.size();

  int i = 0;
  int j = n - 1;
  while (i <= j)
  {
    cout << arr[i] << " ";
    i++;
    cout << arr[j] << " ";
    j--;
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