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
  int temp;
  if (flag == 0)
  {
    for (int i = 0; i < N; i++)
    {
      for (int j = i + 1; j < N; j++)
      {
        if (numbers[i] > numbers[j])
        {
          temp = numbers[i];
          numbers[i] = numbers[j];
          numbers[j] = temp;  
        }
      }
    }
  }
  else
  {
    for (int i = 0; i < N; i++)
    {
      for (int j = i + 1; j < N; j++)
      {
        if (numbers[i] < numbers[j])
        {
          temp = numbers[i];
          numbers[i] = numbers[j];
          numbers[j] = temp;  
        }
      }
    }
  }
}

void IntegerArray::fillUp(void)
{
  srand(time(0));
  for (int i = 0; i < N; i++)
  {
    numbers[i] = rand() % 100;
  }
}

void IntegerArray::getPrimeNumbers(void) const
{
  int start = numbers[0]; 
  int end = numbers[9];
  int i, p;
  while (start >= end || start < 2 || end < 0);
  
  for (p = start; p <= end; p++)
  {
    if (p == 0 || p == 1)
      std::cout << "Error.";
    
    for(i = 2; i <= (p / 2); i++)
		  if (p % i == 0) 
			  std::cout << "0";
	  if (i > (p / 2))
      std:: cout << p << ", ";
  }
}

void IntegerArray::printAll(void) const
{
	std::cout << "Array contents:\n";
	for (int i = 0; i < N; i++)
	{
		std::cout << numbers[i] << "\t";
	}
	std::cout << std::endl;
}