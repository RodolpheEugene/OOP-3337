#include "MyInteger.h"
#include <iostream>
using namespace std;

// Static variables initalizing
int MyInteger::sumOfObjects = 0;
int MyInteger::numberOfObjects = 0;
double MyInteger::averageOfIntegers = 0.0;

//Constructors
MyInteger::MyInteger(int newValue)
{
	value = newValue;
	MyInteger::numberOfObjects++;
	MyInteger::sumOfObjects += value;
	MyInteger::averageOfIntegers = MyInteger::sumOfObjects * 1.0 / MyInteger::numberOfObjects;
}

//Getters functions initialization
int const MyInteger::getValue()
{
	return value;
}
double MyInteger::getAverageOfIntergers()
{
	return averageOfIntegers;
}

// checking of even and odds
bool const MyInteger::isEven()
{
	return ((getValue() % 2 == 0) ? true : false);
}
bool MyInteger::isOdd(int m)
{
	return ((m % 2 != 0) ? true : false);
}

// Cheking for equal values
bool const MyInteger::equal(int m)
{
	return ((getValue() == m) ? true : false);
}
bool const MyInteger::equal(MyInteger& myInt)
{
	return equal(myInt.getValue());
}