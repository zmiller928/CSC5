/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Created on February 16, 2017, 2:44 AM
 * Purpose: Calculate the sum and product of 2 integers 
 */

//System Libraries Here
#include <iostream> //Input - output library
#include <cstdlib>  //Random number generator
#include <ctime>    //Time Library to see the random number generator

using namespace std; //Name-space under which system libraries exist

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number generator with time
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare All Variables Here
    short op1, op2, sum, prod;
    
    //Initialize Variables
    op1 = rand()%90+171; //(10-180)
    op2 = rand()%90+171; //(10-180)
    
    //Map inputs to outputs or process the data
    sum = op1 + op2;
    prod = op1 * op2;
    //Output Located Here
    cout << op1 << " + " << op2 << " = " << sum << endl;
    cout << op1 << " * " << op2 << " = " << prod << endl;
    //Exit
    return 0;
}

