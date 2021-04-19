#include <iostream>
#include <ctime>

int getRdum(void)
{
  int random_num;
  int i;
  int N = 10;
  srand(time(NULL));

  for (i = 0; i < N; i++)
  {
    random_num = rand() % 50;
  }
}