#include <iostream>
#include "Circle2D.h"
using namespace std;

int main()
{
	// Dynamically create a Circle2D object on the heap
	Circle2D *pCir1;
	pCir1 = new Circle2D(2, 2, 5.5);
	cout << "pCir1 is created with center at (2,2) and radius of 5.5" << endl;

	// creating a circle object
	Circle2D cir2 = Circle2D(-6, -3, 1.5);
	cout << "cir2 is created with center at (-6,-3) and radius of 1.5" << endl;

	// calling the getNumberOfCircle function
	// use :: to call static variables
	cout << "The current number of circles is " << Circle2D::getNumberOfCircles() << endl; 

	// creating another circle object with copy constructor
	Circle2D cir3 = Circle2D(cir2);
	cout << "cir2 is copied from cir2 with center at (-6, -3) and radius of 1.5" << endl;

	// use the getNumberOfCircle and checking overlapping
	cout << "The current number of circles is " << cir3.getNumberOfCircles() << endl;
	cout << "pCir1 overlaps cir2 = " << pCir1->overlaps(cir2) << endl;
	cout << "cir3 overlaps cir2 = " << cir3.overlaps(cir2) << endl;

	// Delete the memory allocated
	delete pCir1;
	cout << "pCir1's memory is freed." << endl;

	// the current number of circles.
	cout << "The current number of circles is " << Circle2D::getNumberOfCircles();

}