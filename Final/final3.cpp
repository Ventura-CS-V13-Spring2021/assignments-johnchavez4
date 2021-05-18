#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Student
{
  private:
    std::string name;
    int numClasses;
    std::string* classList;

  public:
    Student();
    std::string getName() const
    {
      return name;
    }

    int getNumClasses() const
    {
      return numClasses
    }

    void studentInput();
    void resetClasses()
    {
      for (int i = 0; i < numClasses; i++)
      {
        classList[i] = "\0";
      }
      numClasses = 0;
    }

    void studentOutput();
    Student& operator=(const Student& rValue);
    Student(const Student& stuObj);
    ~Student();
};