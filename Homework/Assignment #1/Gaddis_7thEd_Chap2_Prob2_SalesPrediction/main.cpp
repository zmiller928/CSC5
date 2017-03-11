/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: To predict how much the East Coast division
 * Created on February 23, 2017, 5:33 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    
    float   eSales = 0.62,     // East Sales Percentage
            salesYr = 4600000, // Est. sales in a year
            baseAm;            // 62% of $4.6 mil 
            
     baseAm = eSales * salesYr;
     
    cout << "62% of $4,600,000 is " << baseAm << endl; //Keeps output to scientific notation...
    
    return 0;
}

