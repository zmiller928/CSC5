/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: Calculate average rainfall for 3 months
 *
 * Created on March 4, 2017, 1:48 PM
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    
    float   month1,     //Rainfall Month 1 -- Declared by user
            month2,     //Rainfall Month 2 -- Declared by user
            month3,     //Rainfall Month 3 -- Declared by user
            avgRain;    //Average Rainfall
            
    string  mtName1,    //Month #1 -- Declared by user
            mtName2,    //Month #2 -- Declared by user
            mtName3;    //Month #3 -- Declared by user
            
    
    cout << "This program caculates the average rainfall "
            "based on the parameters given by the user "
            "(3 seperate months and the rainfall in inches per month)" << endl;
    cout << "What is the first month?" << endl;
    cin >> mtName1;
    cout << "How many inches of rain fell in " << mtName1 << "?" << endl;
    cin >> month1;
    cout << "what is the second month?" << endl;
    cin >> mtName2;
    cout << "How many inches of rain fell in " << mtName2 << "?" << endl;
    cin >> month2;
    cout << "What is the third month?" << endl;
    cin >> mtName3;
    cout << "How many inches of rain fell in " << mtName3 << "?" << endl;
    cin >> month3;
    
    avgRain = (month1 + month2 + month3) / 3;
    
    cout << "Average rainfall for the months of " << mtName1 << ", "
            << mtName2 << ", and " << mtName3 << "." << endl;
    cout << "Average Rainfall = " << avgRain << " in." << endl;
    
    return 0;
}

