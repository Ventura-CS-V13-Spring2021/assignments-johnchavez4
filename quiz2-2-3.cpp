#include  <iostream>

using namespace std;

int main()
{
  int num1, num2, num3;
  
  cout << "Enter three integer values within the range [0, 99]: ";
  cin >> num1 >> num2 >> num3;
  cout << "Here are the values: " << num1 << ", " << num2 << ", and " << num3 << endl;

  if (num1 == num2 && num2 == num3)
  {
    cout << "All numbers are duplicated: " << num1 << ", " << num2 << ", and " << num3 << endl;
  }
  else if (num1 == num2)
  {
    cout << "There are two duplicated numbers: " << num1 << " and " << num2 << endl;
  }
  else if (num2 == num3)
}