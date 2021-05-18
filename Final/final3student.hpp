#ifndef STUDENT_H
#define STUDENT_H
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
    void studentInput();
    void resetClasses();
    void studentOutput();
    Student& operator=(const Student& rValue);
    Student(const Student& stuObj);
    ~Student();
};
#endif