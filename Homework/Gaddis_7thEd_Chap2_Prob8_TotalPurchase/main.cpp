/* 
 * File:   main.cpp
 * Author: Zachary Miller
 * Purpose: Figure out the subtotal of the sale, 
 *          the amount of sales tax, and the total
 * Created on February 24, 2017, 7:21 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float itmPri_1 = 12.95; //Item price #1
    float itmPri_2 = 24.95; //Item price #2
    float itmPri_3 = 6.95;  //Item price #3
    float itmPri_4 = 14.95; //Item price #4
    float itmPri_5 = 3.95;  //Item price #5
    float slsTax = 0.06;    //Sales tax
    float subTotal;         //Sub total
    float taxAmt;           //Amount of tax paid based on tax amount
    float total;            //Items + tax = total
    
    subTotal = itmPri_1 + itmPri_2 + itmPri_3 + itmPri_4 + itmPri_5;
    taxAmt = subTotal * slsTax;
    total = subTotal + taxAmt;
    
    cout << "Subtotal = $" << subTotal << endl;
    cout << "The amount of tax paid = $" << taxAmt << endl;
    cout << "Total = $" << total << endl;
    
    return 0;}

