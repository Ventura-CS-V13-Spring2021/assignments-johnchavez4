#include  <iostream>

using namespace std;

int main()
{
  int start, end;
  int i, j;

  do
  {
    cout << "Enter two numbers to set your range as: ";
    cin >> start >> end;
    cout << "Here are the prime numbers within the range " << start << " to " << end << ":\n";
  }
  while (start >= end; || start < 2 || end < 0);

  for (i = start; i <= end; i++)
  {
    if (i == 0 || i == 1)
      continue;
    
    for (j = 2; j <= (i / 2); j++)
      if (i % j == 0)
        break;
    if (j > (i / 2))
      cout << i << " is a prime number." << endl;
  }
}