#include  <iostream>
#include  <ctime>

using namespace std;

int main()
{
  int i, random_num;
  int num = 5;

  cout << "Here are five random integers: \n" << endl;

  srand(time(NULL));

  for (i = 0; i < num; i++)
  {
    random_num = rand() % 100;
    
  }
}