#include "Circle2D.h"
#include <cmath>

int Circle2D::numberOfCircles = 0;

// Setting up get functions
double const Circle2D::getX()
{
	return x;
}
double const Circle2D::getY()
{
	return y;
}
double const Circle2D::getRadius()
{
	return radius;
}
int Circle2D::getNumberOfCircles()
{
	return numberOfCircles;
}

// setting up the constructors
Circle2D::Circle2D(double newX, double newY, double newRadius)
{
	x = newX;
	y = newY;
	radius = newRadius;
	numberOfCircles++;
}
Circle2D::Circle2D(const Circle2D &circle)
{
	x = circle.x;
	y = circle.y;
	radius = circle.radius;
	numberOfCircles++;
}

// setting the desctructor
Circle2D::~Circle2D()
{
	numberOfCircles--;
}

// setting up the overlapping
bool const Circle2D::overlaps(const Circle2D &circle)
{
	// use sqrt and pow to compute equation
	return ((sqrt(pow(x-circle.x, 2) + pow(y - circle.y, 2))) < (radius + circle.radius));
}
