/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: To figure out annual pay 
 *
 * Created on February 24, 2017, 6:04 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    int payAm = 1700; //Pay per pay period
    int payPer = 26;     //Pay periods per year
    int annPay;          //Annual pay
    
    annPay = payAm * payPer;
    
    cout << "Pay every two weeks = $" << payAm << endl;
    cout << "Amount of pay periods in a year = " << payPer << endl;
    cout << "Annual pay = $" << annPay << endl;
    
    return 0;
}

