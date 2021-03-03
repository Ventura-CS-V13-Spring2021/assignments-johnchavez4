/* This program asks the user to enter the temperature in degrees Celsius, 
then converts it into degrees Fahrenheit. */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double celsius_temp;
    
  // Input for celsius temperature.
  cout << "Enter the temperature in degrees Celsius: ";
  cin >> celsius_temp;
    
  // Celsius to Fahrenheit calculation.
  double fahrenheit_temp = (celsius_temp * 9.0) / 5.0 + 32.0;
    
  // Prints out the result to one decimal point.
  cout << "Celsius " << fixed << setprecision(1) << celsius_temp << " is " 
  << fixed << setprecision(1) << fahrenheit_temp << " Fahrenheit." << endl;
  return 0;
}