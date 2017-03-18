/* 
 * Change for a Dollar Game
 * 
 * Create a change-counting game that gets the user to enter the number of coins 
 * required to make exactly one dollar. The program should ask the number of pennies,
 * nickels, dimes, and quarters. If the total value of the coins entered is equal
 * to one dollar, the program should congratulate the user for winning the game.
 * Otherwise, the program should display a message indicate whether the amount
 * was more than or less than one dollar.
 * 
 */

/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Created on March 17, 2017, 2:25 PM
 */

#include <iostream>

using namespace std;

const int   PENNY = 1;
const int   NICKEL = 5;
const int   DIME = 10;
const int   QTR = 25;

int main(int argc, char** argv) {
    
    unsigned int nPen, nNic, nDime, nQtr, totVal;
    
    cout << "Change for a dollar game" << endl;
    cout << "The objective of this game is to enter a number of pennies, nickels,"
            " dimes, and quarters to get exactly one dollar. If you do so, you win!" << endl;
    cout << "Please start by entering the number of pennies" << endl;
    cin >> nPen;
    cout << "Next, how many nickels?" << endl;
    cin >> nNic;
    cout << "Ok, how many dimes?" << endl;
    cin >> nDime;
    cout << "Lastly, how many quarters?" << endl;
    cin >> nQtr;
    
    totVal = ((PENNY * nPen) + (NICKEL * nNic) + (DIME * nDime) + (QTR * nQtr)) / 100;
  
    if (totVal == 1) {
        cout << "Congratulations, you won the game!" << endl;
    } else if (totVal < 1) {
        cout << "The amount you entered is less than $1." << endl;
    } else {
        cout << "The amount you entered is more than $1." << endl;
    }
    
    return 0;
}

