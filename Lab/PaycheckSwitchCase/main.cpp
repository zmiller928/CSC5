/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: Calculate paycheck
 * Created on March 16, 2017, 12:22 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    unsigned short pChk, pRate, dTime, hrsWrkd;
    
    cout << "This program calculates your paycheck depending on hours worked" << endl;
    cout << "Enter the number of hours worked (1-60)" << endl;
    cin >> hrsWrkd;
    cout << "Enter your normal hourly wage" << endl;
    cin >> pRate;
    
    switch (hrsWrkd) {
        case 1 ... 40 : pChk = pRate * hrsWrkd;
        break;
        case 41 ... 60 : pChk = pRate * hrsWrkd + pRate * (hrsWrkd - 40);
        break;
        default:  cout << "You didn't enter a valid number of hours worked."6 << endl;
    }
    
  
    cout << "You made $" << pChk << " after working " << hrsWrkd << " hours." << endl;

    return 0;
}

