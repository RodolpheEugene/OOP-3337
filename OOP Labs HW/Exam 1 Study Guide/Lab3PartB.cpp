#include <iostream>
using namespace std;


int main()
{
	int* p;
	int num = 5;
	p = &num;
	cout << "The value of the num is " << num << endl;
	cout << "The value of the num is " << *p << endl;
	cout << "The address of the num is " << &num << endl;
	cout << "The address of the num is " << p << endl;
	cout << "The value of the num is " << p << endl;
	cout << "The value of the p pointer is " << &p << endl;

	
}