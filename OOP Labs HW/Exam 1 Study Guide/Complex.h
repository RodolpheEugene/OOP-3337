#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <iomanip>

using namespace std;

// create a class
class Complex
{
private:

	// declaring variables real and img
	double real, img;

public:

	// create no-arg constructor
	Complex();
	Complex(double newReal, double newImg);
	
	// create accessor and mutator
	double const getReal();
	double const getImg();
	void setReal(double newReal);
	void setImg(double newImg);

	// method to print given complex number
	void printComplex();

	// method to add complex numbers
	Complex addition(Complex & comp);

};

// method that return the sum of two complex numbers
Complex additionTwo(Complex& comp1, Complex& comp2);

// method that returns the sum of an array of Complex objects
Complex additionArray(Complex complexArray[], int size);

#endif
