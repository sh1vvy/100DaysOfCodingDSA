#include <iostream>
#include <vector>
using namespace std;

int findMissing(vector<int> &arr)
{
  int n = arr.size();
  // Calculate total sum of all numbers from 0 to n (inclusive), where n is actual number of elements expected
  int totalSum = (n * (n + 1)) / 2;

  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  // The missing number is the difference between the expected total sum and the actual sum of elements in the array
  return totalSum - sum;
}

int main()
{
  int n;
  cout << "Enter number of elements (excluding the missing one): ";
  cin >> n; // This should be one less than the total number of elements from 0 to n

  vector<int> arr(n);
  cout << "Enter " << n << " elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "The missing number is: " << findMissing(arr) << endl;

  return 0;
}
