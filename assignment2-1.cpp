#include <iostream>

using namespace std;

int main()
{
     int number1, number2, number3, greatest_value;

     // Input for integer values, stored in variables.
     cout << "Enter three integer values: ";
     cin >> number1 >> number2 >> number3;
     cout << "You entered " << number1 << ", " << number2 << " and " << number3 << ".\n";

     // Checking which integer is the greatest value.
     if (number1 > number2 && number1 > number3)
     {
          greatest_value = number1;
     }
     else if (number2 > number1 && number2 > number3)
     {
          greatest_value = number2;
     }
     else
     {
          greatest_value = number3;
     }
     cout << greatest_value << " is the greatest value.\n" << endl;
     return 0;
}