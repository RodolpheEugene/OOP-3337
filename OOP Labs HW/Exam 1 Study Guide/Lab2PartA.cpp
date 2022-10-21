#include <iostream>

using namespace std;
int getdigit(int n)
{
	// to count characters in given integer
	if (n == 0)
		return 1;
	int count = 0;
	while (n != 0)
	{
		n = n / 10;
		++count;
	}
	return count;
}
int main()
{
	// get user input
	long long getinput;
	cout << "enter an integer: ";
	cin >> getinput;
	cout << "the number of digits in " << getinput << " is " << getdigit(getinput);

}
