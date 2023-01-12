#include <iostream>
using namespace std;

int main()
{
	// Declaring variable digit and sum
	int sum = 0, digit;

	// Getting input from the user
	cout << "Enter an integer between 0 and 1000000: ";
	cin >> digit;

	// Checking if input is between 0 and 1000000.
	while (digit < 0 || digit > 1000000)
	{
		cout << "Enter an integer between 0 and 1000000: ";
		cin >> digit;
	}

	// sums up the values
	while (digit / 10.0 != 0)
	{
		sum += digit % 10;
			digit /= 10;
	}

	// Diplay the sum of the digits
	cout << "The sum of the digits is " << sum << endl;
}