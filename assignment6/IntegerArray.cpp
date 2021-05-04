#include "IntegerArray.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

int IntegerArray::getLength(void) const
{
    int length = sizeof(numbers)/sizeof(numbers[0]);
    return length;  
}

int IntegerArray::getLastelm(void) const
{
    int last_element = numbers[N - 1];
    return last_element;
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

void IntegerArray::fillUp(void)
{
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        numbers[i] = rand() % 100;
    }
}

void IntegerArray::sortAsc()
{
    int temp;
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

void IntegerArray::removeLastelm(void)
{
    for (int i = 0; i < N - 1; i++)
    {
        std::cout << numbers[i] << "\t";
    }
    std::cout << std::endl;
}

void IntegerArray::appendElement(int v)
{
    v = 100;
    int index;
    for (int i = N; i >= index; i--)
    {
        numbers[i] = numbers[i - 1];
    }
    numbers[index - 1] = v;
}