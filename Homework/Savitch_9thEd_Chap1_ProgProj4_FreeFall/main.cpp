/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Created on February 16, 20147 -- 12:25AM
 * Purpose: Template 
 */

//System Libraries Here
#include <iostream> //Input - output library

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float GRAVITY = 32.174f;  //Gravity on Earth Sea-Level

//Function Prototypes here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number generator with time
 
    
    //Declare All Variables Here
    float time, distnce;
    
    //Initialize Variables
    time = 1.0f;
    distnce = GRAVITY * time * time / 2; //Result in ft
    
    //Map inputs to outputs or process the data
    cout << "Free fall of " << time << "secs = " << distnce << " ft " << endl; 
    //Output Located Here
  
    //Exit
    return 0;
}

