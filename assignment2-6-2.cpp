#include    <iostream>
#include    <fstream>

using namespace std;

int main()
{
  ifstream ifs;
  int N = 0, sum = 0;
  int random_num, average, min, max;

  ifs.open("data.txt");

  if (ifs)
  {
    while (ifs >> random_num)
    {
      cout << "\tRead number from file: " << random_num << endl;
      sum += random_num;

      if (N == 0)
        min = max = random_num;
      else
      {
        if (min > random_num)
          min = random_num;
        if (max < random_num)
          max = random_num;
      }
      N++;
    }
    if (N != 0)
      average = sum / N;
  }
  cout << "Number of integers read from a file: " << N << endl;
  cout << "The sum of all integers: " << sum << endl;
  cout << "The maximum value: " << max << endl;
  cout << "The minimum value: " << min << endl;
  cout << "The average: " << average << endl;
}