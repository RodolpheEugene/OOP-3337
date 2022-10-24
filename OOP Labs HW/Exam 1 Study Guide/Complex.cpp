#include "Complex.h"
#include <iostream>

using namespace std;

// create a no-arg contructor
Complex::Complex()
{
	real = 0.0;
	img = 0.0;
}

// constructors with arg
Complex::Complex(double newReal, double newIng)
{
	real = newReal;
	img = newIng;
}

// accesors and mutators
double const Complex::getReal()
{
	return real;
}
double const Complex::getImg()
{
	return img;
}
void Complex::setReal(double newReal)
{
	real = newReal;
}
void Complex::setImg(double newImg)
{
	img = newImg;
}

//printing the results of the complex numbers portion
void Complex::printComplex()
{
	cout << real << ((img > 0) ? "+" : "") << img << "i";
}

// adding complex numbers defined inside of the class
Complex Complex::addition(Complex& comp)
{
	double sumReal = comp.real + real;
	double sumImg = comp.img + img;
	return Complex(sumReal, sumImg);
}

// Addition of complex numbers defined outside of the class
Complex additionTwo(Complex& comp1, Complex& comp2)
{
	Complex addComp = Complex();

	addComp = addComp.addition(comp1);
	addComp = addComp.addition(comp2);
	return addComp;
}

// Adding complex number array defined outside of the class
Complex additionArray(Complex complexArray[], int size)
{
	Complex sum = Complex();

	for (int i = 0; i < size; i++)
	{
		sum = sum.addition(complexArray[i]);
	}
	return sum;
}