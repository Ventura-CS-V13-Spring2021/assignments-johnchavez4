#include  <iostream>
#include  <cstdlib>
#include  <ctime>

using namespace std;

int main()
{
  int i, greater_value, random_num;

  cout << "Here are five random integers: \n" << endl;

  srand(time(NULL));

  for (i = 0; i < 5; i++)
  {
    random_num = rand() % 100;
    cout << random_num << endl;
  }

}