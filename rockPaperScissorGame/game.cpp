#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>

using namespace std;


const int BIGNUM = 100;
const char ENDLINE = '\n';


//Functions that are used in this program.

void showInstructions(); // This display the instructions
char getChoice(); // Letter choice.
bool yesOrNo(string message); // Ask the user, if he want's to play again.


int main()
{

    string playAgain = "\n### GAMEOVER ###"
                       "\nDo you want to play again? (Y/N) ";
    cout << string(60, '#') << "\n" << string(10, '#') << string(40, ' ')
         << string(10, '#') << endl;
    cout << string(10,'#') << " LET'S PLAY ROCK, PAPER, SCISSORS GAME. "
         << string(10,'#') << endl;
    cout << string(10, '#') << string(40, ' ')
         << string(10, '#') << "\n" << string(60, '#') << endl;
    do{
        int selection = 0;
        int compChoice = 0 ;
        srand(static_cast<unsigned>(time(NULL)));
        compChoice = 1 + rand() %3;

        showInstructions();
        selection = getChoice();


        switch (selection) // This part is the part where the input show's the result.
        {
            case 'R':
            case 'r': cout << "\nYour choice " << setw(11) << " <ROCK> "
                           << "  V.S." << setw(20) << "Computer choose " << setw(10);
                      if (compChoice == 3)
                          cout << "<SCISSOR>"
                               << "\n\n" << string(18,'*') << " ^ You WIN!" << endl;
                      else if (compChoice == 2)
                          cout << "<PAPER>"
                               << "\n\n" << string(56,'*') << " ^ Computer WIN!" << endl;
                      else
                          cout << "<ROCK> \n\n" << string(25,'*') <<" TIE! " << string(26,'*') << endl;
                      break;
            case 'S':
            case 's': cout << "\nYour choice " << setw(11) << " <SCISSOR> "
                           << "  V.S." << setw(20) << "Computer choose " << setw(10);
                      if (compChoice == 2)
                          cout << "<PAPER>"
                               << "\n\n" << string(18,'*') << " ^ You WIN!" << endl;
                      else if (compChoice == 1)
                          cout << "<ROCK>"
                               << "\n\n" << string(56,'*') << " ^ Computer WIN!" << endl;
                      else
                          cout << "<SCISSOR> \n\n" << string(25,'*') <<" TIE! " << string(26,'*') << endl;
                      break;
            case 'P':
            case 'p': cout << "\nYour choice " << setw(11) << " <PAPER> "
                           << "  V.S." << setw(20) << "Computer choose " << setw(10);
                      if (compChoice == 1)
                          cout << "<ROCK>"
                               << "\n\n" << string(18,'*') << " ^ You WIN!" << endl;
                      else if (compChoice == 3)
                          cout << "<SCISSOR>"
                               << "\n\n" << string(56,'*') << " ^ Computer WIN!" << endl;
                      else
                          cout << "<PAPER> \n\n" << string(25,'*') <<" TIE! " << string(26,'*') << endl;
                      break;cout << "\nYour choice " << setw(11) << " <SCISSOR> "
                           << "  V.S." << setw(20) << "Computer choose " << setw(10);
                      if (compChoice == 2)
                          cout << "<PAPER>"
                               << "\n\n" << string(18,'*') << " ^ You WIN!" << endl;
                      else if (compChoice == 1)
                          cout << "<ROCK>"
                               << "\n\n" << string(56,'*') << " ^ Computer WIN!" << endl;
                      else
                          cout << "<SCISSOR> \n\n" << string(25,'*') <<" TIE! " << string(26,'*') << endl;
                      break;
        }
    } while ( yesOrNo(playAgain) );

    return 0;
}

void showInstructions() // show instruction
{
    cout << "\n" << left << setw(10) << "PICK"
         << right << setw(10) << "R, if you want to choose ROCK\n"
         << " " << right << setw(40) << "P, if you want to choose PAPER\n"
         << " " << right << setw(46) << "S, if you want to choose SCISSORS. \n\n"
         << "Enter your choice: ";

}

char getChoice() // Make the user choose the letter.
{
    char letter;
    cin >> letter;
    while (letter != 'R' && letter != 'r' && letter != 'P' && letter !='p'
           && letter != 'S' && letter != 's')
    {
        cout << "Invalid choice! Choose R, P, or S: ";
        cin.clear();
        cin.ignore(BIGNUM, ENDLINE);
        cin >> letter;
    }
    return letter;
}

bool yesOrNo(string message) // Asking the user to play it again or not.
{
    cout << message;
    char answer;
    cin >> answer;
    while (answer != 'Y' and answer != 'N' and answer != 'y' and answer != 'n')
    {
        cout << "\n" << string (15, '*') << " WARNING " << string (15, '*')
             << "\n* You entered invalid response. " << string(6,' ') << "*"
             << "\n* Please enter, 'Y' or 'N' only. " << string(5,' ') << "*"
             << "\n* (lowercase 'y' or 'n' can be used)  *\n"
             << string (39, '*') << endl;
        cin.clear();
        cin.ignore(BIGNUM, ENDLINE);
        cin >> answer;
    }
    return answer == 'Y' or answer == 'y';
}

