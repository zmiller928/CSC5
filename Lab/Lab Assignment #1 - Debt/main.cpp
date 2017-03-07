/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Created on February 21, 2017
 * Purpose:  Calculate the percentage budget for the military and NASA.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float PERCENT = 100.0f;
const float MILLION = 1.0e6f;
const float TRILION = 1.0e12f;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float  fDt2008 = 9.7e12f,     //9.7 Trillion  $'s 2008 Fed Debt
           fDt2016 = 20e12f,      //20 Trillion   $'s 2016 Fed Debt
           pop2008 = 304e6f,      //304 Million   Population in 2008
           pop2016 = 322e6f,      //322 Million   Population in 2016
           per2008, per2016,      //Personal Debt
           perChng, mulChng,      //Percentage and Multiplicative change
           ppChng;                //Per Person Change in Debt
            
    //Map inputs to outputs or process the data
    per2008 = fDt2008 / pop2008;
    per2016 = fDt2016 / pop2016;
    perChng = (fDt2016 - fDt2008) / fDt2008 * PERCENT;
    mulChng=fDt2016/fDt2008;
    ppChng=(per2016-per2008)/per2008*PERCENT;
    
    //Output Located Here
    cout<<"Federal debt 2008 = $"<<fDt2008/TRILION<<" trillion"<<endl;
    cout<<"Federal debt 2016 = $"<<fDt2016/TRILION<<" trillion"<<endl;
    cout<<"United States pop. 2008 = "<<pop2008/MILLION<<" million"<<endl;
    cout<<"United States pop. 2016 = "<<pop2016/MILLION<<" million"<<endl;
    cout<<"Percentage of change in debt = "<<perChng<<"%"<<endl;
    cout<<"Multiplicative change in debt = "<<mulChng<<"x"<<endl;
    cout<<"Per person debt in 2008 = $"<<per2008<<endl;
    cout<<"Per person debt in 2016 = $"<<per2016<<endl;
    cout<<"Per person % change in debt = "<<ppChng<<"%"<<endl;
    
    //Exit
    return 0;
}