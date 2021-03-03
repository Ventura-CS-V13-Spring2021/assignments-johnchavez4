#include <iostream>
using namespace std;

int main()
{
  int lcv=65;

  while(lcv <= 90)
  {
    if (!(lcv % 5))
      cout << endl;
    cout << static_cast<char>(lcv) << " ";
    lcv += 1;
  }
  cout << endl;
}