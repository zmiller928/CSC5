/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: Figure out how many bytes the 
 *          following data types use: 
 *          char, int, float, and double
 * 
 * Created on February 24, 2017, 8:06 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    char apple;
    int orange;
    float grape;
    double pie;
    
    cout << "The size of a character data type in bytes is " << sizeof(char) << endl;
    cout << "The size of a integer data type in bytes is " << sizeof(int) << endl;
    cout << "The size of a float data type in bytes is " << sizeof(float) << endl;
    cout << "The size of a double data type in bytes is " << sizeof(double) << endl;
    
    return 0;
}

