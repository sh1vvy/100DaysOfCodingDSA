// Linear Search for target in array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> arr;
  for (int i = 0; i < 5; i++)
  {
    int data;
    cin >> data;
    arr.push_back(data);
  }

  int target;
  cout << "Target? ";
  cin >> target;

  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] == target)
    {
      cout << "FOUND!";
      break;
    }
  }
}