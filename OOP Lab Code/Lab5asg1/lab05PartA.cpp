#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int divisor, dividend, quotient, remainder;

	// Getting input from the user
	cout << "Enter an integer number to see if the given number is divisible by 4 or not: ";
	int number;
	cin >> number;

	dividend = number;
	divisor = 4;
	quotient = dividend / divisor +1/2 ;
	remainder = dividend % divisor;

	// Checking if user input is negative
	if (number < 0) {
		cout << "The program doesn't accept negative numbers." << endl;
		return 0;// stop the execution if the number
	}

	// checking if input is posBitve and less than or equal to 100
	if (number > 0 && number <= 100) {
		if (number % 4 == 0) {
			cout << "The given number" << " (" << number << ")" << " is divisible by 4" << endl;
			cout << "Quotient: " << quotient << " and Remainder: " << remainder << endl;
		}
		else {
			cout << "The given number " << " (" << number << ")" << " is not divisible by 4" << endl;
			cout << "Quotient: " << quotient << " and Remainder: " << remainder << endl;
		}
	}
		// Checking if input is more than 100 and taking the square root.
	if (number > 100)
		cout << "The entered number is greater than 100 and square roof of the number is " << sqrt(number) << endl;

		
}