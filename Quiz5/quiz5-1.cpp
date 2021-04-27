#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;

int findSum(int arr[], int n)
{
  int sum_array = 0;
  for (int i = 0; i < n; i++)
  {
    sum_array += arr[i];
  }
 return sum_array;
}

int main()
{
  const int SIZE=10;
  int numbers[10] = {5, 10, 75, 80, 25, 55, 95, 70, 60, 15};
  int diff[10];
  int sum=0;

  for (int i = 0; i < 10; i++)
  {
    cout << numbers[i] << endl;
  }
  int n = sizeof(numbers) / sizeof(numbers[0]);
  cout << "Sum of array = " << findSum(numbers, n) << endl;
  for (int j = 0; j < 10; j++)
  {
    diff[j];
    cout << findSum(numbers, n) - numbers[j] << endl;
  }
  return 0;
}