#include <iostream>
using namespace std;

int main()
{
	int  count = 1, max = 1, n = 1;

	cout << "Enter numbers: ";

	// check for how many numbers are even and add it to the max and sum
	while (n != 0) {
		cin >> n;
		if (n >= max) {
			if (n == max)
				count++;
			if (n > max) {
				count = 1;
				max = n;
			}
		}
	}
	// output the max and count
	cout << "The largest number is " << max << endl << "The occurence count of the largest number is " << count << endl;
}



