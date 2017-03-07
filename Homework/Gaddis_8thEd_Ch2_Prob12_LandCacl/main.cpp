/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Created on Feb 16, 2017
 * Purpose:  Convert acres to ft^2, miles^2
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float CNVACFT = 43560;    //1 Acre = 43560 sq ft
const float CNVMLFT = 1.0f/5280;   //1 Mile = 5280 ft

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float acres, ftSq, mileSq;
    
    //Initialize Variables
    acres = 640.0f;   //Number of acres
    
    //Map inputs to outputs or process the data
    ftSq = acres * CNVACFT;
    mileSq = ftSq * CNVMLFT * CNVMLFT;
    
    //Output Located Here
    cout << acres << " Acres = " << ftSq 
         << "ft^2 = " << mileSq << " miles^2" << endl;
    //Exit
    return 0;
}