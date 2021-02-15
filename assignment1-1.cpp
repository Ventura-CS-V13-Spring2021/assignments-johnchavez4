/* This program asks how many tickets for each class of seats were sold, 
then displays the amount of income generated from ticket sales. */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  // Cost of tickets for each class.
  const double rateA = 15.00;
  const double rateB = 12.00;
  const double rateC = 9.00;

  int classA_tickets;
  int classB_tickets;
  int classC_tickets;
    
  // Input for number of tickets sold.
  cout << "How many tickets for Class A seats were sold? ";
  cin >> classA_tickets;
  cout << "How many tickets for Class B seats were sold? ";
  cin >> classB_tickets;
  cout << "How many tickets for Class C seats were sold? ";
  cin >> classC_tickets;
    
  // Calculations for income generated from ticket sales.
  double classA_sales = classA_tickets * rateA;
  double classB_sales = classB_tickets * rateB;
  double classC_sales = classC_tickets * rateC;
    
  // Prints out calculation results.
  cout << "Class A generated $" << fixed << setprecision(2) << classA_sales << " in sales." << endl;
  cout << "Class B generated $" << fixed << setprecision(2) << classB_sales << " in sales." << endl;
  cout << "Class C generated $" << fixed << setprecision(2) << classC_sales << " in sales." << endl;
  return 0;
}