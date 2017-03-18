/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Created on March 12, 2017, 2:49 PM
 */

#include <iostream>

using namespace std;

const unsigned int SECSMN = 60,         //Seconds in a minute
                   SECSHR = 3600,       //Seconds in a hour 
                   SECSDAY = 86400;     //Seconds in a day


int main(int argc, char** argv) {
    
    unsigned int seconds, minutes, hours, days;
            
    
    
    cout << "Enter a number of seconds to calculate how many seconds, minutes, "
            "hours, and days were in that value." << endl;
    cout << "Seconds:" << endl;
    cin >> seconds;
    
    if (seconds >= SECSDAY) {
        days = seconds / SECSDAY;    //Calculates the days based on seconds given by user
        cout << "There is " << days << " day(s) in " << seconds << " seconds." << endl;
    } else if (seconds >= SECSHR) {
        hours = seconds / SECSHR;   //Calculates the hours based on seconds given by user
        cout << "There is " << hours << " hour(s) in " << seconds << " seconds." << endl;
    } else if (seconds >= SECSMN) {
        minutes = seconds / SECSMN; //Calculates the minutes based on seconds given by user
        cout << "There is " << minutes << " minute(s) in " << seconds << " seconds." << endl;
    } else {
        cout << "You didn't enter enough seconds to get minutes, hours, or days!" << endl;
    }
    
    cout << "You entered: " << seconds << " seconds." << endl;

    return 0;
}

