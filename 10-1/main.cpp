#include "studentInfo.hpp"
#include <iostream>

int main()
{
  Student s1, s2; 
  s1.userInput(); 
  std::cout << "Student 1's data:" << std::endl; 
  s1.printStudentInfo(); 
  std::cout << std::endl; 
  s2 = s1; 
  std::cout << "Student 2's data after assignment from student 1:" << std::endl; 
  s2.printStudentInfo(); 
  s1.resetClasses(); 
  std::cout << std::endl; 
  std::cout << "Student 1's data after reset:" << std::endl; 
  s1.printStudentInfo(); 
  std::cout << std::endl; 
  std::cout << "Student 2's data, should still have original classes:" << std::endl; 
  s2.printStudentInfo(); 
  std::cout << std::endl; 
  system("pause"); 
  return 0;
}