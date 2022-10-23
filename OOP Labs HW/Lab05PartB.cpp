#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	// declaring variable for side and area.
	double s = 0.0, area;
	cout << "Enter the side: ";
	cin >> s;					// get user input for side of the hexagon

	// Equation to calculate the area of the hexagon.
	area = (6 * pow(s, 2) / (4 * tan(M_PI/ 6)));

	// Setprecision let's you set the decimal to two places
	cout << "The area of the hexagon is: " << setprecision(4) << area << endl;
	 
}