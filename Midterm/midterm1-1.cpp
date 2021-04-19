#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  ofstream ofs;
  int score1, score2;
  string student_name;

  ofs.open("students.txt");

  if (student_name == "James")
  {
      score1 = 100, score2 = 100;
      cout << "James\n100   100";
  }
}