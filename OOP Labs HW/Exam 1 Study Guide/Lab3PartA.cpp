#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string swapcase(const string& s) //declare the constraint s
{
    string result;

    for (unsigned i = 0; i < s.size(); i++) // use a for loop to iterate through the strings
    {
        if (islower(s[i]))           // check if the string is lowercase
            result += toupper(s[i]); // check if the sting is uppercase
        else if (isupper(s[i]))
            result += tolower(s[i]);
        else
            result = result + s[i];
    }

    return result;
}

int main()
{
    cout << "Enter a string: "; // gets inputs from the user
    string s;
    getline(cin,s); // getline get inputs until the end of the line

    cout << "the new string is: " << swapcase(s) << endl;
    
    return 0;
}