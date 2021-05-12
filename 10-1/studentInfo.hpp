#ifndef STUDENTINFO_H
#define STUDENTINFO_H
#include <string>
#include <cstdlib>

class Student
{
  private:
    std::string name;
    int numClasses;
    std::string *classList;
    
  public:
    Student();  
    void userInput();
    void printStudentInfo();
    void resetClasses();
    Student& operator = (const Student& rightSide);
    ~Student();
};

#endif