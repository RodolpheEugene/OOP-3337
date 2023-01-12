#include <iostream>

using namespace std;
int main()
{
	// initialize variables for distance, miles per galon, and price per galon
	double distance, mpg, ppg;
	cout << "Enter the driving distance: ";
	cin >> distance;

	cout << "Enter miles per gallon: ";
	cin >> mpg;

	cout << "Enter price per gallon: ";
	cin >> ppg;

	// calculate the price per galon equation
	double cost_of_trip;
	cost_of_trip = distance * ppg / mpg;
	cout << "The cost of driving is: $" << cost_of_trip << std::endl;
}