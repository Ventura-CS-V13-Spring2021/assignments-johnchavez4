#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void makearray(double n[], int N);
void printarray(double n[], int N);
int outOfOrder(double n[], int N);

int main()
{
  const int N = 10;
  double numbers[N];
  srand(time(0));
  makearray(numbers, N);
  printarray(numbers, N);
  int ordercheck = outOfOrder(numbers, N);
  if (ordercheck == -1)
  {
    cout << "All elements are in order." << endl;
  }
  else
  {
    cout << "Element " << ordercheck << " is out of order." << endl;
  }
}

void makearray(double n[], int N)
{
  for (int i = 0; i < N; i++)
  {
    n[i] = rand() % 100;
  }
}

void printarray(double n[], int N)
{
  cout << "Array contents:\n";
  for (int i = 0; i < N; i++)
  {
    cout << n[i] << "\t";
  }
  cout << endl;
}

int outOfOrder(double n[], int N)
{
  for (int i = 0; i < (N - 1); i++)
  {
    if (n[i] > n[i + 1])
    {
      return i;
    }    
  }
  return -1;
}