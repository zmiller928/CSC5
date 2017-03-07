/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: Calculate the sea level in 5, 7 and 10 years
 * Created on February 24, 2017, 7:02 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    
    float seaLvl = 0;           //Base sea line
    float seaRise = 1.5;        //Sea rise per year in millimeters
    float sea_5 = 5,
          sea_7 = 7,
          sea_10 = 10; //Sea levels in 5, 7, and 10 years
    float yrTot5, yrTot7, yrTot10; //New sea levels
    
    yrTot5 = (sea_5 * seaRise) + seaLvl;
    yrTot7 = (sea_7 * seaRise) + seaLvl;
    yrTot10 = (sea_10 * seaRise) + seaLvl;
    
    cout << "The sea rise in 5 years = " << yrTot5 << endl;
    cout << "The sea rise in 7 years = " << yrTot7 << endl;
    cout << "The sea rise in 10 years = " << yrTot10 << endl;
    
    return 0;
}

