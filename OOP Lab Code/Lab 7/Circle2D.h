#ifndef CIRCLE2D_H
#define CIRCLE2D_H

// create class name circle
class Circle2D
{
private:
	// declare variable x, y, and radius
	double x, y, radius;

	static int numberOfCircles;

public:
	// setting up get functions for x, y, and radius
	double const getX();
	double const getY();
	double const getRadius();
	int static getNumberOfCircles(); // use :: to call static variables

	// set up constructors for x, y, and radius
	Circle2D(double newX, double newY, double newRadius);
	// Copy circle
	Circle2D(const Circle2D& circle);


	// Setting a destructor for circle2D
	~Circle2D();

	// create a constant overlap functions that returns true
	bool const overlaps(const Circle2D &circle);


};


#endif
