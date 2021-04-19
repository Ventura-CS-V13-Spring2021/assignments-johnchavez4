#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  ofstream ofs;
  int James_score1 = 100, James_score2 = 100;

  ofs.open("students.txt");

  ofs << "James" << "\n" << James_score1 << "   " << James_score2 << endl;

  ofs.close();
}