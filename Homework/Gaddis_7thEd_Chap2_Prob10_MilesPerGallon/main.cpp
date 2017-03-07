/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: Figure out miles per gallon a car gets
 * Created on February 24, 2017, 8:34 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    
    short   miDrvn = 350;
    short   galUsed = 12;
    short   mpg;
    
    mpg = miDrvn / galUsed;
    
    cout << "The cars MPG is " << mpg << endl;
    
    return 0;
}

