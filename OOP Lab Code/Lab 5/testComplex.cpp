#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	// Initialize a complex number with no added values
	
	cout << "c1 created with no-arg constructor = 0";
	Complex comp;
	cout << endl;
	// giving a value to real and imaginary parts
	cout << "c1 real and imaginary parts changed = ";
	Complex comp1 = Complex();
	comp1.setReal(2.4);
	comp1.setImg(4.1);
	comp1.printComplex();
	cout << endl;

	//Intializeing a complex and printing it.

	cout << "c2 created using the user-defined constructor = ";
	Complex comp2 = Complex(3.2, -3.6);
	comp2.printComplex();
	cout << endl;

	// printing out the value of addition of two numbers
	cout << "c3=c1.addition(c2) = ";
	Complex comp1_2 = comp1.addition(comp2);
	comp1_2.printComplex();
	cout << endl;


	// an emptry complex number
	Complex comp3 = Complex();

	// Initializing a complex number with no added values
	cout << "c4 = additionTw0(c2, c3) = ";
	comp3 = additionTwo(comp2, comp1_2);
	comp3.printComplex();
	cout << endl;

	// Initializing and printing out the array
	cout << "additionArray(carray, 5): ";
	Complex comp5 = Complex();
	Complex comp4[] = { Complex(1,1), Complex(2,2), Complex(3,3), Complex(4,4), Complex(5,5)};
	for (Complex i : comp4) { i.printComplex(); cout << " "; }
	cout << "= ";
	comp5 = additionArray(comp4, 5);
	comp5.printComplex();
	cout << endl;

	// Initializing an emprt complex number
	//Complex comp5 = Complex();

	// Adding the aaray to the complex numbers and diplaying the results
	/*comp5 = additionArray(comp4, 5);
	cout << "Complex value 5: ";
	comp5.printComplex();
	cout << endl;*/

	
}