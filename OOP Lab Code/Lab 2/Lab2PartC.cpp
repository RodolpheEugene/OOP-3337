#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // Generate a random number to be guessed
    srand(time(0));

    // this foor loop lets the user play the game 6 times
    for (int i = 0; i < 6; i++)
    {
        // Generate scissor, rock, paper
        int computerNumber = rand() % 3;

        // Prompt the user to enter scissor, rock, or paper
        cout << "scissor (0), rock (1), paper (2): ";
        int userNumber;
        cin >> userNumber;

        // Check the guess
        switch (computerNumber)
        {
        case 0:
            if (userNumber == 0 && computerNumber == 0)
            {
                cout << "Computer is scissor. You are scissor. You draw." << endl;
            }
            else if (userNumber == 1 && computerNumber == 0)
            {
                cout << "Computer is rock. You are scissor. You lose." << endl;
            }
            else if (userNumber == 2 && computerNumber == 0)
            {
                cout << "Computer is paper. You are scissor. You win." << endl;
            }
            break;
        case 1:
            if (userNumber == 0 && computerNumber == 1)
            {
                cout << "Computer is scissor. You are rock. You win." << endl;
            }
            else if (userNumber == 1 && computerNumber == 1)
            {
                cout << "Computer is rock. You are rock. You draw" << endl;
            }
            else if (userNumber == 2 && computerNumber == 1)
            {
                cout << "Computer is paper. You are rock. You lose." << endl;
            }
            break;
        case 2:
            if (userNumber == 0 && computerNumber == 2)
            {
                cout << "Computer is scissor. You are paper. You lose." << endl;
            }
            else if (userNumber == 1 && computerNumber == 2)
            {
                cout << "Computer is rock. You are paper. You win." << endl;
            }
            else if (userNumber == 2 && computerNumber == 2)
            {
                cout << "Computer is paper. You are paper. You draw." << endl;
            }
            break;
        }
        // to break out of the loop.
        //break;
    }
    return 0;


}