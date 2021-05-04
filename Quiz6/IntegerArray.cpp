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