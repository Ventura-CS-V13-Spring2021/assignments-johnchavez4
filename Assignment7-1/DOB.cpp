#include "DOB.hpp"
#include <iostream>

DOB::DOB(): month(1), day(1), year(1)
{
}

DOB::DOB(int m, int d, int y): month(m), day(d), year(y)
{
}

int DOB::getMonth() const
{
  return month;
}

int DOB::getDay() const
{
  return day;
}

int DOB::getYear() const
{
  return year;
}

void DOB::printDate(void) const
{
  std::cout << "DOB:" << month << "/" << day << "/" << year << std::endl;
}

void DOB::setDOB(int m, int d, int y)
{
  month = m;
  day = d;
  year = y;
}

void DOB::setMonth(int m)
{
  month = m;
}

void DOB::setDay(int d)
{
  day = d;
}

void DOB::setYear(int y)
{
  year = y;
}