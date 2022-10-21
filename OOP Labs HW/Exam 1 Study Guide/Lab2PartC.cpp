#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // generate a random number to be guessed
    srand(time(0));

    // this foor loop lets the user play the game 6 times
    for (int i = 0; i < 6; i++)
    {
        // generate scissor, rock, paper
        int computernumber = rand() % 3;

        // prompt the user to enter scissor, rock, or paper
        cout << "scissor (0), rock (1), paper (2): ";
        int usernumber;
        cin >> usernumber;

        // check the guess
        switch (computernumber)
        {
        case 0:
            if (usernumber == 0 && computernumber == 0)
            {
                cout << "computer is scissor. you are scissor. you draw." << endl;
            }
            else if (usernumber == 1 && computernumber == 0)
            {
                cout << "computer is rock. you are scissor. you lose." << endl;
            }
            else if (usernumber == 2 && computernumber == 0)
            {
                cout << "computer is paper. you are scissor. you win." << endl;
            }
            break;
        case 1:
            if (usernumber == 0 && computernumber == 1)
            {
                cout << "computer is scissor. you are rock. you win." << endl;
            }
            else if (usernumber == 1 && computernumber == 1)
            {
                cout << "computer is rock. you are rock. you draw" << endl;
            }
            else if (usernumber == 2 && computernumber == 1)
            {
                cout << "computer is paper. you are rock. you lose." << endl;
            }
            break;
        case 2:
            if (usernumber == 0 && computernumber == 2)
            {
                cout << "computer is scissor. you are paper. you lose." << endl;
            }
            else if (usernumber == 1 && computernumber == 2)
            {
                cout << "computer is rock. you are paper. you win." << endl;
            }
            else if (usernumber == 2 && computernumber == 2)
            {
                cout << "computer is paper. you are paper. you draw." << endl;
            }
            break;
        }
        // to break out of the loop.
        //break;
    }
    return 0;


}
