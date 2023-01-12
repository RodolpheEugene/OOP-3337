#ifndef MYINTEGER_H
#define MYINTEGER_H
#include <iostream>

class MyInteger
{
private:
	
	// declaring the variables
	int value;
	static double averageOfIntegers;
	static int sumOfObjects, numberOfObjects;

public:
	
	// contructor with specified int value
	MyInteger(int newValue);

	// funtion to get values (getter)
	int const getValue();
	double static getAverageOfIntergers();

	// function to check if even or odd
	bool const isEven();
	bool static isOdd(int m);

	// ch3cking for equals
	bool const equal(int m);
	bool const equal(MyInteger &myInt);
};

#endif