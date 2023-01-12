#include <iostream>
using namespace std;

int main()
{
    const int NUMBER_OF_ELEMENTS = 6;
    double numbers[NUMBER_OF_ELEMENTS];
    double sum = 0;

    cout << "Please enter six double number: ";
    for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
    {
      
        cin >> numbers[i];
        if (i % 2)
        sum += numbers[i];
    }

    cout << "Sum of the values at even locations: " << sum << endl;
}