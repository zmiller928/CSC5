/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: Calculate monthly sales tax for a retail company that has to file
 *          monthly tax reports
 *
 * Created on March 9, 2017, 11:37 PM
 */

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main(int argc, char** argv) {
    
    
    float   totInc,              //Total income including taxes
            prdSls,              //Product sales total
            ctyTax = 0.02f,      //County sales tax
            steTax = 0.04f,      //State sales tax
            totTax,              //Sum of county and state tax
            stTax,               //Stores the state tax info to display
            ctTax;               //Stores the county tax info to display
    
    string  month,                 //Month
            year;                  //Year
    
    cout << "This program calculates sales and county tax from the total income" << endl;
    cout << "Month?" << endl;
    cin >> month;
    cout << "Year" << endl;
    cin >> year;
    cout << "Total Sales?" << endl;
    cin >> totInc;
    
    prdSls = totInc / 1.06f;
    ctTax = prdSls * 0.02f;
    stTax = ctTax * 2;
    totTax = stTax + ctTax; 
    
    cout << setprecision(2) << fixed;
    cout << "Month: " << month << " - Year: " << year << endl;
    cout << "_______________________" << endl;
    cout << "Total Collected: \t" << totInc << endl;
    cout << "Sales: \t\t\t" << prdSls << endl;
    cout << "County Sales Tax: \t" << ctTax << endl;
    cout << "State Sales Tax: \t" << stTax << endl;
    cout << "Total Sales Tax: \t" << totTax << endl;
   
    return 0;
}

