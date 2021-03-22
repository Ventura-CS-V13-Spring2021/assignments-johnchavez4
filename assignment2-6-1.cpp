#include    <iostream>
#include    <fstream>
#include    <ctime>
#include    <cstdlib>

using namespace std;

int main()
{
  ofstream ofs;
  int i, N, random_num;

  do
  {
    cout << "How many numbers would you like to store in a file?\n";
    cin >> N;
  } while (N < 0);

  ofs.open("data.txt");

  srand(time(NULL));
  if (ofs)
  {
    for (i = 0; i < N; i++)
    {
      random_num = rand() % 100;
      cout << "Number " << random_num << " was written into a file.\n";
      ofs << random_num << endl;
    }
  }
  ofs.close();
}