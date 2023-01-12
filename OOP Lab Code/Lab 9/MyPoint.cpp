#include <iostream>
#include <cmath>
using namespace std;

class MyPoint
{
private:

	// declare data fields
	double x;
	double y;

public:
	
	// no-arg constructor
	MyPoint()
	{
		x = y = 0;
	}

	// constructor with arg
	MyPoint(double x, double y)
	{
		this->x = x;
		this->y = y;
	}

	// acessors
	double getx() const
	{
		return x;
	}
	double gety() const
	{
		return y;
	}

	// mutators
	void setx(double x)
	{
		this->x = x;
	}
	void sety(double y)
	{
		this->y = y;
	}

	// function methods
	virtual double distance(const MyPoint& p2)
	{
		return sqrt((x - p2.x) * (x - p2.x) + (y - p2.y) * (y - p2.y));
	}

	friend istream& operator>>(istream &is, MyPoint &p);
	friend ostream& operator<<(ostream &os, const MyPoint &p);
};

istream& operator>>(istream &is, MyPoint &p)
{
	cout << "Please enter x y: ";
	is >> p.x >> p.y;
	return is;
}
ostream& operator<<(ostream &os, const MyPoint &p)
{
	cout << "y,y)="
		<< "(" << p.x << "," << p.y << ")";
	return os;
}