// count 0s and 1s in the array
#include <vector>
#include <iostream>

using namespace std;

int main()
{
  vector<int> arr;
  int zeroCount = 0;
  int oneCount = 0;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int data;
    cin >> data;
    arr.push_back(data);
  }

  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] == 0)
      zeroCount++;
    else
      oneCount++;
  }

  cout << "Zero Count: " << zeroCount << endl;
  cout << "One Count: " << oneCount;
}