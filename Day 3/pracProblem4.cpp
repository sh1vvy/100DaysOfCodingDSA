// get unique from an array

#include <iostream>
#include <vector>
using namespace std;

int getUnique(vector<int> arr)
{
  int ans = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    ans = ans ^ arr[i];
  }
  return ans;
}

int main()
{
  vector<int> arr;
  arr.push_back(2);
  arr.push_back(10);
  arr.push_back(11);
  arr.push_back(10);
  arr.push_back(2);
  arr.push_back(13);
  arr.push_back(15);
  arr.push_back(13);
  arr.push_back(15);

  int result = getUnique(arr);
  cout << "Result: " << result;
}