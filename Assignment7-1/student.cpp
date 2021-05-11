#include "student.hpp" 
#include "DOB.hpp"
#include "address.hpp" 
#include <iostream>
#include <string>

Student::Student(): sname("noname"), id(0), dob(1, 1, 1), address("nostreet", "nostate", 0)
{
}

Student::Student(string stname, int idnum, DOB date, Address addr): sname(stname), id(idnum), dob(date), address(addr)
{
  if (stname.empty() || idnum < 0)
  {
    std::cout << "One or more possible errors detected: no name and/or ID number provided\n";
    exit(1);
  }
}

int Student::getID() const
{
  return id;
}

string Student::getSname() const
{
  return sname;
}

DOB Student::getDOB() const
{
  return dob;
}

Address Student::getAddress() const
{
  return address;
}

void Student::setSname(string name)
{
  sname = name;
}

void Student::setID(int num)
{
  id = num;
}

void Student::setDOB(DOB date)
{
  dob = date;
}

void Student::setAddress(Address addr)
{
  address = addr;
}

void Student::printStudent()
{
  std::cout << "Name:" << sname << "  ID number:" << id << dob.getMonth() << dob.getDay() << dob.getYear()
  << address.getStreet() << address.getState() << address.getZip() << std::endl;