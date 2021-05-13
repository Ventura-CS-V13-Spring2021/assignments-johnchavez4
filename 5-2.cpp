#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void makearray(int n[], int N);
void printarray(int n[], int N);
void findminmax(int n[], int N);

int main()
{
  const int N = 10;
  int numbers[N];
  srand(time(0));
  makearray(numbers, N);
  printarray(numbers, N);
  findminmax(numbers, N);
}

void makearray(int n[], int N)
{
  for (int i = 0; i < N; i++)
  {
    n[i] = rand() % 100;
  }
}

void printarray(int n[], int N)
{
  cout << "Array contents:\n";
  for (int i = 0; i < N; i++)
  {
    cout << n[i] << "\t";
  }
  cout << endl;
}

void findminmax(int n[], int N)
{
  int min, max;
  for (int i = 0; i < N; i++)
  {
    if (i == 0)
    {
      min = max = n[i];
    }
    else
    {
      if (min > n[i])
      {
        min = n[i];
      }
      if (max < n[i])
      {
        max = n[i];
      }
    }
  }
  cout << "Minimum value: " << min << endl;
  cout << "Maximum value: " << max << endl;
}