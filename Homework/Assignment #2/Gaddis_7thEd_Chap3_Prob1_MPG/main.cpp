/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: Calculate a cars MPG with the miles driven on
 *          a full tank and how many gallons the car can hold
 * Created on March 3, 2017, 3:55 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int     tankCap,    //Amount of gas the car can hold
            mlsDrvn,    //How many miles the car can drive on a full tank of gas
            MPG;        //Holds the MPG amount
    
    cout << "This program will calculate how many miles per gallon your car gets" << endl;
    cout << "How many gallons of gas does your car hold? " << endl;
    cin >> tankCap;
    cout << "How many miles can the car drive on a full tank? " << endl;
    cin >> mlsDrvn;
    
    MPG = mlsDrvn / tankCap;
    
    cout << "Your car holds " << tankCap << " gallons of gas" << endl;
    cout << "Your car drives a total of " << mlsDrvn << " miles on a full tank." << endl;
    cout << "Your car will get " << MPG << " miles per gallon" << endl;
    
    return 0;
}

