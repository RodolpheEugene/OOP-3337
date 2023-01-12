#include "MyInteger.h"
#include <iostream>
using namespace std;

int main()
{
	//Intital values
	cout << "The average of the integers is " << MyInteger::getAverageOfIntergers() << endl;
	cout << "isOdd(3) = " << ((MyInteger::isOdd(3))? true: false) << endl;

	//Initializing the integers
	MyInteger i1 = MyInteger(9323);
	MyInteger i2 = MyInteger(147);
	MyInteger i3 = MyInteger(9323);

	//Displaying the result
	cout << "i1.isEven() = " << ((i1.isEven()) ? true : false) << endl;
	cout << "i3.equals(843) = " << ((i3.equal(843)) ? true : false) << endl;
	cout << "i1.equals(i3) = " << ((i1.equal(i3)) ? true : false) << endl;
	cout << "The average of integers is " << MyInteger::getAverageOfIntergers() << endl;

}