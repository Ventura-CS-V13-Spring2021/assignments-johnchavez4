#include "IntegerArray.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

int IntegerArray::getLength(void) const
{
  int length = sizeof(numbers)/sizeof(numbers[0]);
  return length;
}

void IntegerArray::sortArray(int flag)
{

}

void IntegerArray::fillUp(void)
{
  srand(time(0));
  for (int i = 0; i < N; i++)
  {
    numbers[i] = rand() % 100;
  }
}

void IntegerArray::getPrimeNumber(void) const
{
  int start, end;
  int primes = 0;
  int p;
  do
  {
    start = numbers[0];
    end = numbers[9];
  }
  while (start >= end || start < 2 || end < 0);
  for (p = start; p <= end; p++)
  {
    if (p == 0 || p == 1)
      continue;
    
    for(i = 2; i <= (p / 2); i++)
		  if (p % i == 0) 
			  break;
	  if (i > (p / 2))
      primes++;
  }
}

void IntegerArray::printAll(void) const
{
  std::cout << "Array contents:/n";
  for (int i = 0; i < N; i++)
  {
    std::cout << numbers[i] << "/t";
  }
  std::cout << std::endl;
}