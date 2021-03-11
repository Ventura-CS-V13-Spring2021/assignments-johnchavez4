#include	<iostream>
using namespace std;

int main()
{
  int start_point, end_point;
	int	i, p;

	do 
  {
		cout << "Enter two numbers to set your range as: ";
		cin >> start_point >> end_point;
		cout << "Here are the prime numbers within the range " << start_point << " to " << end_point << ":\n";
	} 

  while (start_point >= end_point || start_point < 2 || end_point < 0);

	for (p = start_point; p <= end_point; p++)
	{
		if (p == 0 || p == 1)
			continue;

		for(i = 2; i <= (p / 2); i++)
			if (p % i == 0) 
				break;
		if (i > (p / 2))
			cout << p << " is a prime number." << endl;
	}
}