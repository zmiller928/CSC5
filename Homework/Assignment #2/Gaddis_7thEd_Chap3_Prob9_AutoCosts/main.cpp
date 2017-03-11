/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: Calculate monthly car costs & annual cost
 * Created on March 7, 2017, 9:47 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    //Variables 
    int     carLoan = 475,      //Car loan payment per month ($)
            carIns = 190,       //Car insurance per month ($)
            gas = 60,           //Gas cost per month ($)
            oil = 20,           //Oil cost per month ($)
            tires = 0,          //Tire cost per month ($)
            carMain = 0,        //Car maintenance per month ($)
            mntCost,            //Monthly car cost
            annCost;            //Annual car cost
    
    //Calculations
    mntCost =   carLoan + carIns + gas + oil + tires + carMain;         //Calculating monthly cost  
    annCost =   (carLoan + carIns + gas + oil + tires + carMain) * 12;  //Calculating yearly cost
    
    cout << "The monthly cost of my car is = $" << mntCost << endl;
    cout << "The yearly cost of my car is = $" << annCost << endl;
   
    return 0;
}

