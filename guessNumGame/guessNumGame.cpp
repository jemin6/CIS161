/*
This program allow the user to play "guess my number" game.
The program randomly choose an integer between 1-100.
User should guess the number.
The answer should be one of the phrases
"Too high", "Too low", or "You guessed it!".
User should guess until they get it right.
*/

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int guess_number;
    int random_number;
    int number_tried = 0;
    random_number = rand();
    random_number %= 100;
    random_number += 1;

    while ( random_number )
    {
        cout << "Choose any integer between 1 and 100." << endl;
        cin >> guess_number; // Any number you think is the right number
        number_tried += 1;

        // If the number is less than 0 or greater than 100, the program should request the user
        // to re-enter the guess without counting this as a guess.
        if ( guess_number < 1 || guess_number > 100 )
        {
            cout << "You entered invalid number, please re-enter.\n\n\n\n"<< endl;
            number_tried -= 1;
        }
        // Displays if the guess number is higher than the random number,
        // it makes the user try it again. But the try of the guess will be counted.
        else if ( random_number < guess_number )
        {
            cout << "The number you guessed is too high." << endl;
            cout << "You tried " << number_tried << " times." << endl;
            cout << "Please, try it again.\n\n\n\n" << endl;
        }
        // Displays if the guess number is lower than the random number,
        // it makes the user try it again. But the try of the guess will be counted.
        else if ( random_number > guess_number )
        {
            cout << "The number you guessed is too low." << endl;
            cout << "You tried " << number_tried << " times." << endl;
            cout << "Please, try it again.\n\n\n\n" << endl;
        }
        // Displays if the guess number is exactly the random number given,
        // it shows how many tries the user had, and end the program.
        else
        {
            cout << "Congratulate, You guessed the right number <";
            cout << random_number << "> by " ;
            cout << number_tried << " times!!! Good job." << endl;
            break;
        }
    }


    return 0;
}

