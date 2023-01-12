#include "MyPoint.cpp"
#include <iostream>
#include <cmath>


class ThreeDPoint : public MyPoint
{
private:

	// declare data fields
	double z;

public:

	// constructors
	ThreeDPoint()
	{
		MyPoint();
		z = 0;
	}
	ThreeDPoint(double x, double y, double z)
	{
		setx(x);
		sety(y);
		this->z = z;
	}

	// accessors
	double getz() const
	{
		return z;
	}
	double distance(MyPoint& p)
	{
		MyPoint* p0 = &p;
		ThreeDPoint* p1 = dynamic_cast<ThreeDPoint*>(p0);
		if (p1 != NULL)
		{
			return sqrt(pow((getx() - p1->getx()), 2) + pow((gety() - p1->gety()), 2) + pow((getz() - p1->getz()), 2));
		}
		else
		{
			return sqrt(pow((getx() - p0->getx()), 2) + pow((gety() - p0->gety()), 2) + pow((getz() - 0), 2));
		}
	}

	friend istream &operator>>(istream &is, MyPoint &p);
	friend ostream &operator<<(ostream &os, const MyPoint &p);

};

ostream& operator<<(ostream& out, const ThreeDPoint a)
{
	cout << "(x,y,z)=" << "(" << a.getx() << "," << a.gety() << "," << a.getz() << ")";
	return out;
}
istream& operator>>(istream &in, ThreeDPoint &a) 
{
	double x, y, z;
	cout << "please enter x y z: ";
	cin >> x >> y >> z;
	a = ThreeDPoint(x, y, z);
	return in;
}
int main() {
    ThreeDPoint p3, p4;
    ThreeDPoint p5 = ThreeDPoint();
    MyPoint p6 = MyPoint();

    cout <<
        "1. Test the constructors of ThreeDPoint:" << endl <<
        "1.1 Create ThreeDPoint object p1 with the no-arg constructor: p1 is " << endl;
    ThreeDPoint p1 = ThreeDPoint();
    cout << p1 << endl <<
        "1.2 Create ThreeDPoint object p2 with the 3-args constructor:" << endl;
    ThreeDPoint p2 = ThreeDPoint(10, 30, 25.5);
    cout << "p2 is " << p2 << endl <<
        "2. Test the distance function:" << endl <<
        "The distance between p1 and p2 is " << p1.distance(p2) << endl <<
        "3. Test the insertion and extraction operators:" << endl <<
        "3.1 Create ThreeDPoint object p3 and p4 with the no-arg constructor:" << endl <<
        "3.2 Use cin>> p3 to set p3's (x,y,z):" << endl <<
        "For p3,";
    cin >> p3;
    cout <<
        "3.3 Use cout << p3 to print p3" << endl <<
        "p3 is " << p3 << endl <<
        "3.4 Use cin>> p4 to set p4's (x,y,z):" << endl <<
        "For p4, ";
    cin >> p4;
    cout <<
        "3.5 Use cout << p4 to print p4" << endl <<
        "p4 is " << p4 << endl <<
        "3.6 Test the distance function:" << endl <<
        "The distance between p3 and p4 is " << p3.distance(p4) << endl <<
        "4. Create ThreeDPoint p5 and MyPoint p6 using their no-arg constructors:" << endl <<
        "4.1 Use >> to set p5 and p6, then use << to print p5 and p6: \nFor p5, ";
    cin >> p5;
    cout << "For p6, ";
    cin >> p6;
    cout <<
        "p5 is " << p5 << "; p6 is " << p6 << endl <<
        "5. Test the polymorphism using p5.distance(p6):" << endl <<
        "The distance between p5 and p6 is " << p5.distance(p6);
    return 0;
}

