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
      return numClasses;
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

Student::Student()
{
    name = "\0";
    numClasses = 0;
    classList = new string[100];
}

void Student::studentInput()
{
    std::cin.ignore(1000, "\n");
    std::cout << "Student name? ";
    getline(cin, name);
    std::cout << endl;
    std::cout << "# of courses? ";
    std::cin >> numClasses;
    std::cin.ignore(1000, "\n");
    std::cout << "Class List:";
    for (int i = 0; i < numClasses; i++)
    {
        getline(cin, classList[i]);
    }
}

void Student::studentOutput()
{
  std::cout << "Name: " << name << std::endl;
  std::cout << "# of classes: " << numClasses << std::endl;
  std::cout << "Student classes: \n";
  for (int i = 0; i < numClasses; i++)
  {
    std::cout << classList[i] << std::endl;
  }
}

Student::Student(const Student& stuObj):
name(stuObj.getName()), numClasses(stuObj.getNumClasses())
{
  classList = new std::string [numClasses];
  for (int i = 0; i < numClasses; i++)
  {
    classList[i] = stuObj.classList[i];
  }
}

Student& Student::operator=(const Student& rValue)
{
  if (numClasses != rValue.numClasses)
  {
    delete[] classList;
    classList = new std::string[rValue.numClasses];
  }
  name = rValue.name;
  numClasses = rValue.numClasses;
  for (int i = 0; i < numClasses; i++)
  {
    classList[i] = rValue.classList[i];
  }
  return *this;
}

Student::~Student()
{
  delete[] classList;
}

int main()
{
  char answer;
  Student s1;
  Student s2;
    
  s1.resetClasses();
  s1.studentInput();
  s2 = s1;
  s1.studentOutput();
  s2.studentOutput();
  return 0;
}