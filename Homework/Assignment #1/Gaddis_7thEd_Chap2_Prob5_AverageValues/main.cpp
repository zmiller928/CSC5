/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: 
 * Created on February 24, 2017, 5:14 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    short   a = 28,
            b = 32,
            c = 37,
            d = 24,
            e = 33;
    short   sum;
    short   average;
    
    sum = 28 + 32 + 37 + 24 + 33;
    average = sum / 5;
    
    cout << "The sum of the variables = " << sum << endl;
    cout << "The average of the variables = " << average << endl;
    
    return 0;
}

