#include  <iostream>
#include  <fstream>
#include  <string>

using namespace std;

int main()
{
  ofstream ofs;
  int i, employee, employee_ID;
  string employee_name, department;
  double salary;

  cout << "Enter the number of employees: ";
  cin >> employee;

  ofs.open("employee.txt");

  for (i = 0; i < employee; i++)
  {
    cout << "Enter the employee ID: \n";
    cin >> employee_ID;
    cout << "Enter the employee name: \n";
    cin >> employee_name;
    cout << "Enter the department name: \n";
    cin >> department;
    cout << "Enter the salary: $\n";
    cin >> salary;
    ofs << employee << endl;
    ofs << employee_ID << end;
    ofs << employee_name << endl;
    ofs << department << endl;
    ofs << salary << endl;
  }
  ofs.close();
}