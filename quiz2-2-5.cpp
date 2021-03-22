#include  <iostream>

using namespace std;

int main()
{
  int range_start, range_end;
  int i, j;

  do
  {
    cout << "Enter two numbers to set your range as: ";
    cin >> range_start >> range_end;
    cout << "Here are the prime numbers within the range " << range_start << " to " << range_end << ":\n";
  }
  while (range_start >= range_end || range_start < 2 || range_end < 0);

  for (i = range_start; i <= range_end; i++)
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