/* 
 * File:   main.cpp
 * Author: Zachary Miller
 *
 * Created on March 11, 2017, 3:42 AM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    
    int num1, num2;     //Numbers to be compared
    
    cout << "This program compares two numbers to determine "
            "which of the two is smaller or bigger" << endl;
    cout << "Enter a value for Number 1 (1-100):" << endl;
    cin >> num1;
    cout << "Enter a value for Number 2 (1-100)" << endl;
    cin >> num2;
    
    if (num1 > num2) {
        cout << "Number 1 is larger than Number 2" << endl;
    } else {
        cout << "Number 1 is smaller than number 2" << endl;
    }
    
    return 0;
}

