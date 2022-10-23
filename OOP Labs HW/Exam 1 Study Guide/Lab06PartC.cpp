#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void count(const string& s) {
    // creating for the alphabet
    int alphabet[26] = {};

    // size of the array
    size_t l = s.length();

    // iterate thourgh to the string and counts the letters 
    for (int i = 0; i < 26; i++) {
        for (char k : s) {
            if ((k == 'A' + i || k == 'a' + i) && isalpha(k)) {
                alphabet[i]++;
            }
        }
        if (alphabet[i] != 0)
            cout << (char)('a' + i) << ":" << alphabet[i] << " times" << endl;
    }
}

int main() {
 
    string s;

    // Asking user for input
    cout << "Enter a string: ";
    getline(cin, s);

    //calling the function
    count(s);
}