
/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: Create a random number guessing game. The game will allow the user
 *          customize the difficulty of the game by increasing the range at which
 *          the random number generator will pick between and lowering the amount
 *          of guesses you are allowed before the game ends.
 * 
 *          Minimum range of numbers is 10
 *          Minimum number of guesses is 5
 * Created on April 7, 2017, 2:10 AM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
  
    int nAttemp = 0;   //Number of attempts to get the correct answer
    int numRnge = 0;    //Number range
    int guess = 0;      //Guess variable
    int answer = 0;     //Store the random answer
    int nmOfAtt = 0;    //Variable used to test whether you were out of attempts to display a message
    
    //Prompt user for the range of numbers
    cout << "This is a random number guessing game.\n";
    cout << "I, the computer, will randomly pick a number\n\n";
    cout << "You will have a set amount of attempts to try and guess it. But, don't worry, I'll be giving you clues along the way\n\n";
    cout << "First, what is the range of numbers you want the number to be between?\n";
    cout << "Only type in one number, for example, if you want to guess a number between 1 and 10, you'll enter 10\n";
    cout << "or you want to try to guess a number between 1 and 100, you will enter 100 when prompted\n\n";
    cout << "So go ahead, enter the range for the number to be between.\n";
    cin >> numRnge;
    cout << "\n";
    
    //Input validation for number range
    while (numRnge < 10) {
        cout << "You didn't enter a valid range." << endl;
        cout << "Input must be greater than or equal to 10." << endl;
        cout << "Please re-enter a valid range: ";
        cin >> numRnge; 
        cout << endl;
    }
    
    srand(time(NULL));  //seeding random number
    answer = rand() % numRnge + 1;  //assigns random number to answer variable
    
    //Asking user to input the amount of attempts he/she wants
    cout << "Now, how many attempts would you like to have to guess the number?" << endl;
    cin >> nAttemp;
    cout << endl;
    
    //Input validation for attempts
    while (nAttemp < 5) {
        cout << "You didn't enter a valid number of attempts." << endl;
        cout << "Attempts must be greater than or equal to 1." << endl;
        cout << "Please re-enter a valid number of attempts: ";\
        cin >> nAttemp;
        cout << endl;
    }

    //Loop for the number of guesses allowed
    for (int i = 0; i < nAttemp; i++) {
        cout << "Guess #" << i + 1 << ": ";
        cin >> guess;
        //If else statement to test if guess is correct or false
        if (guess != answer) {
            //Nested if else statement to output if guess was to high or low
            if(guess > answer) {
                cout << "Guess is too high. Try again.\n\n";
            } else {
                cout << "Guess is too low. Try again\n\n";
            }
        } else {
            cout << "You won!\n";
            cout << "The correct answer is: " << answer << "\n\n";
            cout << "Thank you for playing my game. Come back real soon!\n";
            return 0;
        } 
    }

    nmOfAtt += nAttemp;
    
    //If to check if you ran out of attempts and display a message
    if (nmOfAtt == nAttemp) {
        cout << "you ran out of attempts, try again!" << endl;
    }
    
    cout << "The correct answer is: " << answer << "\n\n";
    cout << "Thank you for playing my game. Come back real soon!\n";
    
    return 0;
}