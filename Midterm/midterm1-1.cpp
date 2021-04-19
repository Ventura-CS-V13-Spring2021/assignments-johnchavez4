#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  ofstream ofs;
  int James_score1 = 100, James_score2 = 100;
  int Orlando_score1 = 95, Orlando_score2 = 90;
  int Tim_score1 = 100, Tim_score2 = 90;
  int Maxim_score1 = 100, Maxim_score2 = 90;
  int Will_score1 = 100, Will_score2 = 100;
  int Jason_score1 = 100, Jason_score2 = 90;
  int David_score1 = 90, David_score2 = 90;
  int Bill_score1 = 100, Bill_score2 = 95;
  int Carmen_score1 = 100, Carmen_score2 = 100;
  int Chris_score1 = 100, Chris_score2 = 90;

  ofs.open("students.txt");

  ofs << "James" << "\n" << James_score1 << "   " << James_score2 << endl;
  ofs << "Orlando" << "\n" << Orlando_score1 << "   " << Orlando_score2 << endl;
  ofs << "Tim" << "\n" << Tim_score1 << "   " << Tim_score2 << endl;
  ofs << "Maxim" << "\n" << Maxim_score1 << "   " << Maxim_score2 << endl;
  ofs << "Will" << "\n" << Will_score1 << "   " << Will_score2 << endl;
  ofs << "Jason" << "\n" << Jason_score1 << "   " << Jason_score2 << endl;
  ofs << "David" << "\n" << David_score1 << "   " << David_score2 << endl;
  ofs << "Bill" << "\n" << Bill_score1 << "   " << Bill_score2 << endl;
  ofs << "Carmen" << "\n" << Carmen_score1 << "   " << Carmen_score2 << endl;
  ofs << "Chris" << "\n" << Chris_score1 << "   " << Chris_score2 << endl;
  ofs.close();
}