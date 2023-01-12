#include <iostream>
#include <string>
#include <cmath>
#include<iomanip>
using namespace std;

// create a class
class Complex
{
private:
	// declare data fields
	double a, b;

public:

	// no-arg constructor
	Complex()
	{
		a = 0;
		b = 0;
	}

	// constructor with one argument
	Complex(double a)
	{
		this->a = a;
		b = 0;
	}

	// constructor with double arguments
	Complex(double a, double b)
	{
		this->a = a;
		this->b = b;
	}

	// accessors and mutators for a and b
	double set_a()
	{
		return a;
	}
	double set_b()
	{
		return b;
	}
	void set_a_b(double a, double b) {

		this->a = a;
		this->b = b;
	}

	// toString function  for in
	string toString(const Complex& val_in)
	{
		int a_temp = val_in.a;
		int b_temp = val_in.b;
		string a = to_string(a_temp);
		string b = to_string(b_temp);
		string comp;

		if (val_in.a == 0 && val_in.b == 0)
		{
			comp = "0";
		}
		else if (val_in.b == 0)
		{
			comp = a;
		}
		else {
			comp = a + " + " + b + "i";
		}
		return comp;
	}
	
	// toString function for double
	void toString_double(double str_val, const Complex& val_in)
	{
		double val_a = (str_val + val_in.a);
		double val_b = val_in.b;
		cout << setprecision(2) << val_a << " + " << setprecision(0) << val_b << "i" << endl;
 	}

	// math function
	string abs(const Complex& val_in)
	{
		int val_a = pow(val_in.a, 2);
		int val_b = pow(val_in.b, 2);
		int result = sqrt(val_a + val_b);
		return to_string(result);
	}
	Complex add(const Complex& val_in) const {

		int a_val = a + val_in.a;
		int b_val = b + val_in.b;
		return Complex(a_val, b_val);
	}
	Complex subtract(const Complex& val_in) const {

		int a_val = a - val_in.a;
		int b_val = b - val_in.b;
		return Complex(a_val, b_val);
	}
	Complex multiply(const Complex& val_in) const {

		int a_val = (a * val_in.a) - (b * val_in.b);
		int b_val = (b * val_in.a) + (a * val_in.b);
		return Complex(a_val, b_val);
	}
	Complex divide(const Complex& val_in) const {

		double a_val = ((a * val_in.a) + (b * val_in.b)) / (pow(val_in.a, 2) + pow(val_in.b, 2));
		double b_val = ((b * val_in.a) - (a * val_in.b)) / (pow(val_in.a, 2) + pow(val_in.b, 2));
		return Complex(a_val, b_val);
	}

	// overload and insertion prototypes
	friend ostream& operator<<(ostream&, const Complex&);
	friend istream& operator>>(istream&, const Complex&);

	// arithemitic operator implementations
	Complex operator+=(const Complex& secondComplex) {

		*this = add(secondComplex);
		return *this;
	}
	Complex operator-=(const Complex& secondComplex) {

		*this = subtract(secondComplex);
		return *this;
	}
	Complex operator*=(const Complex& secondComplex) {

		*this = multiply(secondComplex);
		return *this;
	}
	Complex operator/=(const Complex& secondComplex) {

		*this = divide(secondComplex);
		return *this;
	}

	// unary operator implementation
	Complex operator+() {

		return *this;
	}
	Complex operator-() {

		return Complex(-a, -b);
	}

	// prefix uniary operator implementation
	Complex& operator++() {

		a += 1;
		b += 1;
		return *this;
	}
	Complex& operator--() {

		a -= 1;
		b -= 1;
		return *this;
	}

	// postfix unary operator implementations
	Complex operator++(int number) {

		Complex temp(a + 1, b + 1);

		return temp;
	}
	Complex operator--(int number) {

		Complex temp(a - 1, b - 1);

		return temp;
	}

	// overlaod index operator implementations
	int operator[](int index) {

		if (index == 0) {

			int temp = a;
			return temp;
		}
		else {
			int temp = b;
			return temp;
		}
	}
};
// & overlaoding
ostream& operator<<(ostream& out, const Complex& complex) {

	out << complex.a;
	out << " + ";
	out << complex.b;
	out << "i";
	return out;
}
istream& operator>>(istream& in, Complex& complex) {

	cout << "Enter a and b for (a + bi): ";
	int a_temp, b_temp;
	cin >> a_temp;
	cin >> b_temp;
	complex.set_a_b(a_temp, b_temp);
	return in;
}

// Arethmetic overloading
Complex operator+(const Complex& c1, const Complex& c2) {

	return c1.add(c2);
}
Complex operator-(const Complex& c1, const Complex& c2) {

	return c1.subtract(c2);
}
Complex operator*(const Complex& c1, const Complex& c2) {

	return c1.multiply(c2);
}
Complex operator/(const Complex& c1, const Complex& c2) {

	return c1.divide(c2);
}

// boolean overload operator
bool operator==(Complex& c1, Complex& c2) {

	if (c1.set_a() == c2.set_a()) {

		return 1;
	}
	else {

		return 0;
	}
}
int main()
{
	// Problem 1 tests constructors
	cout << "1. Test constructors:" << endl;

	cout << "1.1 Create a complex number c0 with no-arg constructor Complex():" << endl;

	// outputs the contents of c0 and its absolute value abs
	Complex c0;
	cout << "c0 = " << c0.toString(c0);
	cout << ", its real part Re(c0) = " << c0.set_a();
	cout << ", its imaginary part Im(c0) = " << c0.set_b();
	cout << ", it's absolute value |c0| = " << c0.abs(c0) << endl << endl;

	cout << "1.2 Create a complex number c1 with constructor Complex(a):" << endl;

	// outputs the contents of c1 and its absolute value abs
	cout << "Enter a number for a: ";
	int input;
	cin >> input;
	Complex c1(input);
	cout << "c1 = " << c1.toString(c1);
	cout << ", its real part Re(c1) = " << c1.set_a();
	cout << ", its imaginary part Im(c1) = " << c1.set_b();
	cout << ", it's absolute value |c1| = " << c1.abs(c1) << endl << endl;

	cout << "1.3 Create a complex number c2 with constructor Complex(a, b):" << endl;

	// outputs the contents of c2 and its absolute value abs
	cout << "Enter number a b: ";
	int in_a, in_b;
	cin >> in_a;
	cin >> in_b;
	Complex c2(in_a, in_b);
	cout << "c2 = " << c2.toString(c2);
	cout << ", its real part Re(c2) = " << c2.set_a();
	cout << ", its imaginary part Im(c1) = " << c2.set_b();
	cout << ", it's absolute value |c2| = " << c2.abs(c2) << endl << endl;

	// Problem 2 test the overloading of << and >> 
	cout << "2. Test overloaded stream insertion operator >> and exctraction operator <<:" << endl;

	// outputs cx1 and cx2 using overloaded stream operators
	cout << "Enter two complex numbers following the prompts:" << endl;
	Complex  cx1;
	cin >> cx1;
	cout << "cx1 = " << cx1 << endl;
	Complex  cx2;
	cin >> cx2;
	cout << "cx2 = " << cx2 << endl << endl;

	// Problem 3 tests the overloaded argumented arithemetic operators +, -, *, /
	cout << "3. Test overloaded arithemetic operators +, -, *, /:" << endl;
	cout << "(" << cx1 << ") + (" << cx2 << ")" << " = " << cx1 + cx2 << endl;
	cout << "(" << cx1 << ") - (" << cx2 << ")" << " = " << cx1 - cx2 << endl;
	cout << "(" << cx1 << ") * (" << cx2 << ")" << " = " << cx1 * cx2 << endl;
	cout << "(" << cx1 << ") / (" << cx2 << ")" << " = " << cx1 / cx2 << endl << endl;

	//Problem 4 Test overloaded augmented arithmetic operators +=, -=, *=, /=
	cout << "4. Test overloaded augmented arithmetic operators +=, -=, *=, /=: " << endl;
	cout << "cx1 = " << cx1 << "; cx2 = " << cx2 << endl;
	cx2 += cx1;
	cout << "(cx2 += cx1); cx2 = " << cx2 << endl;
	cx2 -= cx1;
	cout << "(cx2 -= cx1); cx2 = " << cx2 << endl;
	cx2 *= cx1;
	cout << "(cx2 *= cx1); cx2 = " << cx2 << endl;
	cx2 /= cx1;
	cout << "(cx2 /= cx1); cx2 = " << cx2 << endl << endl;

	// Problem 5 test overloaded unary operators
	cout << "5. Test overload unary operators: " << endl;
	cout << "5.1. Test overloaded sign operators +, -:" << endl;
	cout << "cx1 = " << cx1 << endl;
	cx1 = +cx1;
	cout << "+cx1 = " << cx1 << endl;
	cx1 = -cx1;
	cout << "-cx1 = " << cx1 << endl << endl;

	cout << "5.2. Test overloaded prefixes ++, --: " << endl;
	cout << "cx1 = " << cx1 << endl;
	cx1 = ++cx1;
	cout << "++cx1; cx1 = " << cx1 << endl;
	cx1 = --cx1;
	cout << "--cx1; cx1 = " << cx1 << endl << endl;

	cout << "5.3 Test overloaded postifexes ++, --: " << endl;
	cout << "cx1 = " << cx1 << endl;
	cx1 = cx1++;
	cout << "cx1++; cx1 = " << cx1 << endl;
	cx1 = cx1--;
	cout << "cx1--; cx1 = " << cx1 << endl << endl;

	// Problem 6 test overloaded subscript operator []
	cout << "6.1 test overloaded subscript operator []: " << endl;
	cout << "cx1 = " << cx1 << endl;
	cout << "cx1[0] = " << cx1[0] << endl;
	cout << "cx1[1] = " << cx1[1] << endl;

	cx2[0] == cx2.set_a();
	cx2[1] == cx2.set_b();
	cout << "cx1[0] = " << cx2[0] << endl;
	cout << "cx1[1] = " << cx2[1] << endl;
	cout << "(cx2[0] == cx2.return_a()) = " << ((cx2[0] == cx2.set_a()) ? 1 : 0) << endl;
	cout << "(cx2[1] == cx2.return_b()) = " << ((cx2[1] == cx2.set_b()) ? 1 : 0) << endl << endl;

	// Problem 7 Test implicit conversion from double to complex
	cout << "7.1 Test Implecit conversion from double to complex: " << endl;
	cout << "cx2 = " << cx2 << endl;
	cout << "3 + cx2" << " = " << 3 + cx2 << endl;
	cout << "3.4 + cx2" << " = ";
	cx2.toString_double(3.4, cx2);
}