/* Game of NIM
playing starts with a row of 11 sticks.
On their turn a player may remove 1, 2, or 3 sticks from the pile.
Players alternate taking turns,and the play removing the last stick wins.
two players alternating turns.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    const int MAX_STICKS = 11;
    int num, total;
    string Player1;
    string Player2;
    bool winner = false;
    string sticks;
    sticks ='|';


    total = MAX_STICKS;

    cout << "Welcome to the game of Nim!\n" << endl;
    cout << "Two player will take turns to remove 1, 2, or 3 sticks from the initial 11." << endl;
    cout << "   The player removing the last stick wins!\n\n" << endl;
    cout << "The game currently looks like this: " ;
    cout << string(11, '|') ;

    cout << "\n\n**** Let's start the game! ****" << endl;
    cout << "Enter the first player's name(no spaces): ";
    cin >> Player1; //Enter the first player's name.
    cout << "Enter the second player's name(no spaces): ";
    cin >> Player2; //Enter the second player's name.

    while (!winner)
    {
        if (total >= 0) // This shows the current number of sticks left when it is greater than 0.
            cout << "\n\n**** There are (" << total << ") sticks ****\n" << "Currently, it looks like this: "
                 << string(total, '|') << endl;

        //Player 1 type the number to subtract.
        cout << "Player " << Player1 << "! It's your turn." << endl;
        cout << "Please choose number (1,2,or 3):  " ;
        cin >> num;

        //If the integer is between 1 and 3, this statement works. It subtract the integer that the player inputted.
        if (num > 0 && num < 4){
            total -= num;
        } else {
            cout << "Invalid Number" << endl; //If the input number is not between 1 and 3, it shows invalid number sign.
        }

        if (total <= 0) { //when the remain sticks become 0, the player become the winner.
            cout << "\nCongratulations Player " << Player1 << " you are the winner!" << endl;
            break;


        }


        //This part is the same statements as above, but it's just for the player2.
        if (total >= 0)
            cout << "\n\n**** There are (" << total << ") sticks left ****\n" << "Currently, it looks like this: "
                 << string(total, '|') << endl;
        cout << "Player " << Player2 << "! It's your turn. " << endl;
        cout << "Please choose number (1,2,or 3):  " ;
        cin >> num;

        if (num > 0 && num < 4) {
            total -= num;
        } else {
            cout << "Invalid Number" << endl;
        }

        if (total <= 0) {
            cout << "\nCongratulations Player " << Player2 << " you are the winner!" << endl;
            break;
        }
    }

    cin.get();
    cin.get();                  //stytem("pause");
    return 0;
}

