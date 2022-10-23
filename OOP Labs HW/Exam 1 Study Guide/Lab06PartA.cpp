#include <iostream>
using namespace std;

int evenCount(int value)
{
	int count = 0;

	// Base cases for recursion
	if (value == 0)
		return 1;
	if (value == 1)
		return 0;
	
	if (value % 2 == 0)
	{
		return 1 + evenCount(value / 10);
	}
	else
		return evenCount(value / 10);
}

int main()
{
	// declaring variable to get input from the user
	int number;

	cout << "Enter the number: ";
	cin >> number;

	cout << "The number of even digits is " << evenCount(number) << endl;

}