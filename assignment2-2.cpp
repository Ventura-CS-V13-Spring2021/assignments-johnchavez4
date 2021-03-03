#include <iostream>

using namespace std;

int main()
{
     int number1, number2, number3;

     // Input for integer values, stored in variables.
     cout << "Enter three integer values: ";
     cin >> number1 >> number2 >> number3;
     cout << "You entered " << number1 << ", " << number2 << " and " << number3 << ".\n";

     // Checking for whether all numbers are equal, two are duplicated, or all are distinct.
     if (number1 == number2 && number2 == number3)
     {
         cout << "All numbers are the same.\n";
     }
     else if (number1 == number2 || number2 == number3 || number1 == number3)
     {
         cout << "There are two duplicated numbers.\n";
     }
     else
     {
         cout << "All numbers are distinct.\n";
     }
     return 0;
}