#include "studentInfo.hpp"
#include <iostream>
#include <iomanip>

Student::Student(): name(""), numClasses(0), classList(NULL)
{
}

Student::~Student()
{
  numClasses = 0;
  resetClasses();
  name = "";
}

void Student::resetClasses()
{
  if (classList)
  {
    delete[] classList;
    classList = NULL;
    numClasses = 0;
  }
}

void Student::userInput()
{
  resetClasses();
  std::cout << "Student name?\n";
  getline(std::cin, name);
  std::cout << "# of classes?\n";
  std::cin >> numClasses;
  std::cin.ignore(2, '\n');
  if (numClasses > 0) 
  { 
    classList = new std::string[numClasses]; 
    for (int i = 0; i< numClasses; i++) 
    { 
      std::cout << "Enter name of class #" << (i + 1) << ": "; 
      getline(std::cin, classList[i]);
    }
  }
  std::cout << std::endl;
}

void Student::printStudentInfo()
{
  std::cout << "Student name: " << name << std::endl
  << "Class List: " << std::endl;
  for (int i = 0; i < numClasses; i++)
  {
    std::cout << std::setw(2) << std::right << i + 1 << ") " << classList[i] << std::endl;
  }   
}

Student& Student::operator = (const Student& rightSide)
{
  resetClasses();
  numClasses = rightSide.numClasses;
  if (numClasses > 0)
  {
    classList = new std::string[numClasses];
    for (int i = 0; i < numClasses; i++)
    {
      classList[i] = rightSide.classList[i];
    }
  }
  return *this;
}