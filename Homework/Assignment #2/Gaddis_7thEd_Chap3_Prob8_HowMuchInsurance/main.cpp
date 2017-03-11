/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: Caculate how much coverage a building needs
 *          if it requires 80% of the buildings value
 *
 * Created on March 5, 2017, 11:55 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;



int main(int argc, char** argv) {
    
    float   perVal = 0.8f,      //Percentage variable -- 80%
            bldVal,             //How much is the building worth
            insAmt;             //How much coverage is needed
            
    cout << "This program calculates how much insurance is needed to sufficiently"
            "cover the amount needed if the building was destroyed." << endl;
    cout << "How much is the building worth?" << endl;
    cin >> bldVal;
    
    insAmt = bldVal * perVal;
    
    cout << setprecision(2) << fixed;
    cout << "Insurance needed to cover a building that costs $" << bldVal <<
            " is $" << insAmt << "." << endl;
    
    return 0;
}

