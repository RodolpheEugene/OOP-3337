#include <iostream>
#include <string>
using namespace std;

int main()
{
	// declare a string variable
	string n;

	// getting input from the user
	cout << "enter a string: ";
	getline(cin, n);

	// for loop iterate through string to display odd numbers
	for (int i = 1; i < n.size(); i+=2)
	{
		cout << n[i];
	}
}