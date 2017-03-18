/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: Write a program that asks the user to enter a month, a day,
 *          and a two digit year to determine whether the month times
 *          the day is equal to the year
 *
 * Created on March 11, 2017, 2:01 AM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    
    int month, day, year;
    
    cout << "Enter a month (in numeric form), a day, and two digit year."
            "and the program will determine if the date is magic" << endl;
    cout << "Enter a month:" << endl;
    cin >> month;
    cout << "Enter a day:" << endl;
    cin >> day;
    cout << "Enter a year:" << endl;
    cin >> year;
    
    if (year == month * day) {
        cout << "Wow, it's magic!" << endl;
    } else {
        cout << "The date is not magic." << endl;
    }
    

    return 0;
}

