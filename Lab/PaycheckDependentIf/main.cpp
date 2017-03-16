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
    cout << "Enter the number of hours worked" << endl;
    cin >> hrsWrkd;
    cout << "Enter your normal hourly wage" << endl;
    cin >> pRate;
    
    if (hrsWrkd <= 40 && hrsWrkd > 0) {
        pChk = pRate * hrsWrkd;
    } else if (hrsWrkd > 40) {
        pChk = pRate * hrsWrkd + pRate * (hrsWrkd - 40);
    } else {
        cout << "You didn't enter a valid entry for hours worked or pay rate" << endl;
                return 1;
    }
    
    cout << "You made $" << pChk << " after working " << hrsWrkd << " hours." << endl;

    return 0;
}

