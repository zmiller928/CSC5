/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Created on April 4, 2017, 11:55 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    //Declare and initialize variables
    int n, fact = 1; 
    
    //Input data
    cout << "Please enter a value for N" << endl;
    cin >> n;
    
    //For loop to calculate factorial
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    
    //Output to display results
    cout << "The factorial of " << n << " is " << fact << endl;
    
    return 0;
}

