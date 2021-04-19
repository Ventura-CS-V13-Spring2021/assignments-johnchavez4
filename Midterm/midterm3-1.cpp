#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

int getRdum(int random_num)
{
  int i;
  int N = 3;
  srand(time(NULL));
  for (i = 0; i < N; i++)
  {
      random_num = rand() % 3;
  }
}

int findMin_and_findMax(int min, int max, int random_num)
{
    int min, max;
    if (min > random_num)
    {
        min = random_num;
    }
    if (max < random_num)
    {
        max = random_num;
    }
}

int getDifference(int difference, int random_num)
{
    difference -= random_num;
}

int fileWrite(int difference)
{
    ofstream ofs;
    ofs.open("question3.txt");
    if (difference < 3)
    {
        return 0;
    }
}