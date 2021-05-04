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