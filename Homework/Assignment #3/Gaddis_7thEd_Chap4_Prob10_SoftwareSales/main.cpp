/*
 * Software Sales
 * 
 * A software company sells a package that retails for $99. Quantity discounts are
 * given according to the following table.
 * 
 * ______________________________________________________
 * Quantity                     Discount
 * ______________________________________________________
 * 10-19                        20%
 * 20-49                        30%
 * 50-99                        40%
 * 100 or more                  50%
 * ______________________________________________________
 * 
 * Write a program that asks for the number of units sold and computes the total
 * cost of the purchase.
 * 
 * Input Validation: Make sure the number of units is greater than 0
 * 
 */

/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Created on March 17, 2017, 5:26 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    
    const unsigned int PRICE = 99;    //Retail price for one copy of the software
    unsigned int       uSold,           //Number of units sold
                       retail,          //Total of software without discount
                       disCost;         //Discounted price on quantity orders
    
    //Ask user how many copies were purchased
    cout << "How many copies of the software were purchased?" << endl;
    cin >> uSold;
    
    //Determines which calculation to execute based on how many units were purchased
    if (uSold > 0 && uSold <= 9) {
        disCost = uSold * PRICE;
        cout << "Total Cost = $" << disCost << endl;
    } else if (uSold >= 10 && uSold <= 19) {
        cout << "You've ordered between 10-19 units. You will receive a 20% discount!" << endl;
        retail = uSold * PRICE;
        disCost = retail - (retail * .2);
        cout << "Total Cost = $" << disCost << endl;
    } else if (uSold >= 20 && uSold <= 49){
        cout << "You've ordered between 20-49 units. You will receive a 30% discount!" << endl;
        retail = uSold * PRICE;
        disCost = retail - (retail * 0.3);
        cout << "Total Cost = $" << disCost << endl;
    } else if (uSold >= 50 && uSold <= 99) {
        cout << "You've ordered between 50-99 units. You will receive a 40% discount!" << endl;
        retail = uSold * PRICE;
        disCost = retail - (retail * 0.4);
        cout << "Total Cost = $" << disCost << endl;
    } else if (uSold >= 100) {
        cout << "You've ordered 100 or more units. You will receive a 50% discount!" << endl;
        retail = uSold * PRICE;
        disCost = retail - (retail * 0.5);
        cout << "Total Cost = $" << disCost << endl;
        
    } else {
        cout << "You didn't enter a valid entry for units purchased" << endl;
    }

    return 0;
}

