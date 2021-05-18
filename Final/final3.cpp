#include <iostream>
#include <cstdlib>
#include <string>

class Student
{
  private:
    std::string name;
    int numClasses;
    std::string* classList;

  public:
    Student();
    std::string getName() const;
    int getNumClasses() const;
};